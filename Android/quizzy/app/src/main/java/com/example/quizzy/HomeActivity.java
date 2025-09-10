package com.example.quizzy;

import android.content.Intent;
import android.os.Bundle;
import android.widget.ProgressBar;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;
import com.google.android.material.card.MaterialCardView;

public class HomeActivity extends AppCompatActivity {

    private static final int REQUEST_EXAM = 1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_home);

        MaterialCardView pythonCard = findViewById(R.id.cardPythonExam);
        pythonCard.setOnClickListener(v -> {
            Intent intent = new Intent(HomeActivity.this, ExamActivity.class);
            intent.putExtra("examName", "PYTHON");
            startActivityForResult(intent, REQUEST_EXAM);
        });

        MaterialCardView javaCard = findViewById(R.id.cardJavaExam);
        javaCard.setOnClickListener(v -> {
            Intent intent = new Intent(HomeActivity.this, ExamActivity.class);
            intent.putExtra("examName", "JAVA");
            startActivityForResult(intent, REQUEST_EXAM);
        });
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (requestCode == REQUEST_EXAM && resultCode == RESULT_OK && data != null) {
            String examName = data.getStringExtra("examName");
            int score = data.getIntExtra("score", 0);

            if ("JAVA".equals(examName)) {
                ProgressBar pb = findViewById(R.id.progressBarNA);
                TextView tvProgress = findViewById(R.id.tvProgressNA);
                TextView tvStatus = findViewById(R.id.tvExamStatusNA);

                tvStatus.setVisibility(TextView.GONE);
                pb.setVisibility(ProgressBar.VISIBLE);
                tvProgress.setVisibility(TextView.VISIBLE);

                pb.setProgress(score);
                tvProgress.setText("Progress: " + score + "%");
            }

            if ("PYTHON".equals(examName)) {
                ProgressBar pb = findViewById(R.id.progressBar1);
                TextView tvProgress = findViewById(R.id.tvProgress1);

                pb.setProgress(score);
                tvProgress.setText("Progress: " + score + "%");
            }
        }
    }
}
