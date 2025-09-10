package com.example.agnihotra;

import android.Manifest;
import android.content.pm.PackageManager;
import android.location.Location;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

import com.example.agnihotra.API.SunriseSunsetApi;
import com.example.agnihotra.Model.SunriseSunsetResponse;
import com.google.android.gms.location.FusedLocationProviderClient;
import com.google.android.gms.location.LocationServices;
import com.google.android.gms.tasks.OnSuccessListener;
import com.google.android.gms.location.LocationCallback;
import com.google.android.gms.location.LocationRequest;
import com.google.android.gms.location.LocationResult;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;
import retrofit2.Retrofit;
import retrofit2.converter.gson.GsonConverterFactory;

public class Home extends AppCompatActivity {

    private TextView lat, log,sunriseText, sunsetText;;
    private FusedLocationProviderClient fusedLocationClient;
    private static final int LOCATION_PERMISSION_REQUEST = 100;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_home);

        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        lat = findViewById(R.id.tvLatitude);
        log = findViewById(R.id.tvLongitude);
        sunriseText = findViewById(R.id.tvSunrise);
        sunsetText = findViewById(R.id.tvSunset);

        fusedLocationClient = LocationServices.getFusedLocationProviderClient(this);

        // Check permission
        if (ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION)
                != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(this,
                    new String[]{Manifest.permission.ACCESS_FINE_LOCATION}, LOCATION_PERMISSION_REQUEST);
        } else {
            getLocation();
        }
    }

    private void getSunriseSunset(double latitude, double longitude) {
        Retrofit retrofit = new Retrofit.Builder()
                .baseUrl("https://api.sunrise-sunset.org/")
                .addConverterFactory(GsonConverterFactory.create())
                .build();

        SunriseSunsetApi api = retrofit.create(SunriseSunsetApi.class);
        Call<SunriseSunsetResponse> call = api.getSunriseSunset(latitude, longitude, 0);

        call.enqueue(new Callback<SunriseSunsetResponse>() {
            @Override
            public void onResponse(Call<SunriseSunsetResponse> call, Response<SunriseSunsetResponse> response) {
                if (response.isSuccessful() && response.body() != null) {
                    sunriseText.setText("Sunrise: " + response.body().results.sunrise);
                    sunsetText.setText("Sunset: " + response.body().results.sunset);
                } else {
                    sunriseText.setText("Sunrise: Error");
                    sunsetText.setText("Sunset: Error");
                }
            }

            @Override
            public void onFailure(Call<SunriseSunsetResponse> call, Throwable t) {
                sunriseText.setText("Sunrise: Failed");
                sunsetText.setText("Sunset: Failed");
            }
        });
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == LOCATION_PERMISSION_REQUEST) {
            if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                getLocation();
            } else {
                Toast.makeText(this, "Location permission denied", Toast.LENGTH_SHORT).show();
            }
        }
    }



    private void getLocation() {
        LocationRequest locationRequest = LocationRequest.create();
        locationRequest.setPriority(LocationRequest.PRIORITY_HIGH_ACCURACY);
        locationRequest.setInterval(1000); // 1 second
        locationRequest.setFastestInterval(500);

        LocationCallback locationCallback = new LocationCallback() {
            @Override
            public void onLocationResult(LocationResult locationResult) {
                if (locationResult == null) {
                    lat.setText("Latitude: Unable to get location");
                    log.setText("Longitude: Unable to get location");
                    return;
                }

                Location location = locationResult.getLastLocation();
                double latitude = location.getLatitude();
                double longitude = location.getLongitude();

                lat.setText("Latitude: " + latitude);
                log.setText("Longitude: " + longitude);

                getSunriseSunset(latitude, longitude);

                fusedLocationClient.removeLocationUpdates(this);
            }

        };

        if (ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
            // TODO: Consider calling
            //    ActivityCompat#requestPermissions
            // here to request the missing permissions, and then overriding
            //   public void onRequestPermissionsResult(int requestCode, String[] permissions,
            //                                          int[] grantResults)
            // to handle the case where the user grants the permission. See the documentation
            // for ActivityCompat#requestPermissions for more details.
            return;
        }
        fusedLocationClient.requestLocationUpdates(locationRequest, locationCallback, getMainLooper());
    }

}
