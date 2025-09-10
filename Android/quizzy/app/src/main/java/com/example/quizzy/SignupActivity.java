package com.example.quizzy;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class SignupActivity extends AppCompatActivity {

    EditText firstName, lastName, email, password;
    TextView goToLogin;
    Button Signup;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_signup);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        firstName = findViewById(R.id.edtSignupFirstName);
        lastName = findViewById(R.id.edtSignupLastName);
        email = findViewById(R.id.edtSignupEmail);
        password = findViewById(R.id.edtSignupPassword);
        Signup = findViewById(R.id.btnSignupsignupBtn);
        goToLogin = findViewById(R.id.tvSignupToLogin);


        goToLogin.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                startActivity(new Intent(getApplicationContext(), LoginActivity.class));
            }
        });

        Signup.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String fn = firstName.getText().toString().trim();
                String ln = lastName.getText().toString().trim();
                String e = email.getText().toString().trim();
                String pas = password.getText().toString().trim();

                Boolean isError = false;

                if (fn.isEmpty()) {
                    isError = true;
                    firstName.setError("Enter First Name");
                }
                if (ln.isEmpty()) {
                    isError = true;
                    lastName.setError("Enter Last Name");
                }
                if (e.isEmpty()) {
                    isError = true;
                    email.setError("Enter Email");
                }
                if (pas.isEmpty()) {
                    isError = true;
                    password.setError("Enter Password");
                }

                if (!isError) {

                    Toast.makeText(getApplicationContext(), "Signup Success", Toast.LENGTH_LONG).show();
                    startActivity(new Intent(getApplicationContext(), LoginActivity.class));

                } else {
                    Toast.makeText(getApplicationContext(), "Signup Failed: ", Toast.LENGTH_LONG).show();
                }

            }

        });



    }




}