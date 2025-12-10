package com.example.weatherapp;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import android.Manifest;
import android.annotation.SuppressLint;
import android.content.pm.PackageManager;
import android.location.Location;
import android.os.Bundle;
import android.os.Looper;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import com.google.android.gms.location.FusedLocationProviderClient;
import com.google.android.gms.location.LocationCallback;
import com.google.android.gms.location.LocationRequest;
import com.google.android.gms.location.LocationResult;
import com.google.android.gms.location.LocationServices;
import com.google.android.material.floatingactionbutton.FloatingActionButton;

import org.json.JSONException;
import org.json.JSONObject;

import java.io.IOException;

import okhttp3.Call;
import okhttp3.Callback;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

public class MainActivity extends AppCompatActivity {

    private EditText editCity;
    private TextView textTemp, textDescription;
    private ImageView weatherIcon;
    private FloatingActionButton btnAdd;

    private final OkHttpClient client = new OkHttpClient();
    private final String apiKey = "7570f1c75d4a49cbb4b64102251609";

    private FusedLocationProviderClient fusedLocationClient;
    private static final int LOCATION_REQUEST_CODE = 100;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        editCity = findViewById(R.id.editCity);
        textTemp = findViewById(R.id.textTemp);
        textDescription = findViewById(R.id.textDescription);
        weatherIcon = findViewById(R.id.weatherIcon);
        btnAdd = findViewById(R.id.btnAdd);

        fusedLocationClient = LocationServices.getFusedLocationProviderClient(this);

        // FAB search button click
        btnAdd.setOnClickListener(v -> {
            String city = editCity.getText().toString().trim();
            if (!city.isEmpty()) {
                fetchWeatherByCity(city);
            } else {
                Toast.makeText(this, "Enter a city name", Toast.LENGTH_SHORT).show();
            }
        });

        // Request location permission if not granted
        if (ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION)
                != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(this,
                    new String[]{Manifest.permission.ACCESS_FINE_LOCATION}, LOCATION_REQUEST_CODE);
        } else {
            getCurrentLocationWeather();
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions,
                                           @NonNull int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == LOCATION_REQUEST_CODE && grantResults.length > 0
                && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
            getCurrentLocationWeather();
        } else {
            Toast.makeText(this, "Location permission denied", Toast.LENGTH_SHORT).show();
        }
    }

    private void getCurrentLocationWeather() {
        if (ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION)
                != PackageManager.PERMISSION_GRANTED) return;

        fusedLocationClient.getLastLocation().addOnSuccessListener(this, location -> {
            if (location != null) {
                fetchWeatherByLocation(location.getLatitude(), location.getLongitude());
            } else {
                requestNewLocationData();
            }
        });
    }

    @SuppressLint("MissingPermission")
    private void requestNewLocationData() {
        LocationRequest request = LocationRequest.create()
                .setPriority(LocationRequest.PRIORITY_HIGH_ACCURACY)
                .setInterval(0)
                .setFastestInterval(0)
                .setNumUpdates(1);

        fusedLocationClient.requestLocationUpdates(request, new LocationCallback() {
            @Override
            public void onLocationResult(LocationResult result) {
                if (result == null) return;
                Location location = result.getLastLocation();
                if (location != null) fetchWeatherByLocation(location.getLatitude(), location.getLongitude());
            }
        }, Looper.getMainLooper());
    }

    // Fetch weather for city (WeatherAPI.com)
    private void fetchWeatherByCity(String city) {
        String url = "https://api.weatherapi.com/v1/current.json?key=" + apiKey + "&q=" + city + "&aqi=no";
        makeWeatherRequest(url);
    }

    // Fetch weather for latitude & longitude
    private void fetchWeatherByLocation(double lat, double lon) {
        String url = "https://api.weatherapi.com/v1/current.json?key=" + apiKey + "&q=" + lat + "," + lon + "&aqi=no";
        makeWeatherRequest(url);
    }

    // Make API request and update UI
    private void makeWeatherRequest(String url) {
        Request request = new Request.Builder().url(url).build();
        client.newCall(request).enqueue(new Callback() {
            @Override
            public void onFailure(Call call, IOException e) {
                runOnUiThread(() ->
                        Toast.makeText(MainActivity.this, "Failed to load weather data", Toast.LENGTH_SHORT).show()
                );
            }

            @Override
            public void onResponse(Call call, Response response) throws IOException {
                if (!response.isSuccessful()) {
                    runOnUiThread(() ->
                            Toast.makeText(MainActivity.this, "API error: " + response.code(), Toast.LENGTH_SHORT).show()
                    );
                    return;
                }

                String responseData = response.body().string();
                runOnUiThread(() -> {
                    try {
                        JSONObject json = new JSONObject(responseData);
                        JSONObject current = json.getJSONObject("current");
                        JSONObject condition = current.getJSONObject("condition");

                        double temp = current.getDouble("temp_c");
                        String desc = condition.getString("text");
                        String mainCondition = condition.getString("text");

                        textTemp.setText(String.format("%.1f°C", temp));
                        textDescription.setText(desc);
                        setWeatherIcon(mainCondition);

                    } catch (JSONException e) {
                        e.printStackTrace();
                        Toast.makeText(MainActivity.this, "JSON parsing error", Toast.LENGTH_SHORT).show();
                    }
                });
            }
        });
    }

    private void setWeatherIcon(String mainCondition) {
        mainCondition = mainCondition.toLowerCase();
        if (mainCondition.contains("sun") || mainCondition.contains("clear")) {
            weatherIcon.setImageResource(R.drawable.ic_weather_sunny);
        } else if (mainCondition.contains("cloud")) {
            weatherIcon.setImageResource(R.drawable.ic_weather_cloudy);
        } else if (mainCondition.contains("rain") || mainCondition.contains("drizzle")) {
            weatherIcon.setImageResource(R.drawable.ic_weather_rainy);
        } else if (mainCondition.contains("thunder")) {
            weatherIcon.setImageResource(R.drawable.ic_weather_storm);
        } else {
            weatherIcon.setImageResource(R.drawable.ic_weather_cloudy);
        }
    }
}
