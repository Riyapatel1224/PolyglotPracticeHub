package com.example.agnihotra.API;

import com.example.agnihotra.Model.SunriseSunsetResponse;

import retrofit2.Call;
import retrofit2.http.GET;
import retrofit2.http.Query;

public interface SunriseSunsetApi {
    @GET("json")
    Call<SunriseSunsetResponse> getSunriseSunset(
            @Query("lat") double latitude,
            @Query("lng") double longitude,
            @Query("formatted") int formatted
    );
}
