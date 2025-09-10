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

public class LoginActivity extends AppCompatActivity {

    EditText email, password;
    TextView gotoSingin;
    Button Login;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_login);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        email = findViewById(R.id.edtLoginEmail);
        password = findViewById(R.id.edtLoginPassword);
        Login = findViewById(R.id.btnLoginBtn);
        gotoSingin = findViewById(R.id.tvToSignup);

        gotoSingin.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                startActivity(new Intent(getApplicationContext(), SignupActivity.class));
            }
        });

        Login.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String e = email.getText().toString().trim();
                String pas = password.getText().toString().trim();

                Boolean isError = false;

                if (e.isEmpty()) {
                    isError = true;
                    email.setError("Enter Email");
                }
                if (pas.isEmpty()) {
                    isError = true;
                    password.setError("Enter Password");
                }

                if (!isError) {

                    Toast.makeText(getApplicationContext(), "Login Success", Toast.LENGTH_LONG).show();
                    startActivity(new Intent(getApplicationContext(), HomeActivity.class));

                } else {
                    Toast.makeText(getApplicationContext(), "Login Failed: ", Toast.LENGTH_LONG).show();
                }
            }
        });



    }
}