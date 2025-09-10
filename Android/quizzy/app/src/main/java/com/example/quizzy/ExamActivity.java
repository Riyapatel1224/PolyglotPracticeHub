package com.example.quizzy;

import android.content.Intent;
import android.os.Bundle;
import android.widget.*;
import androidx.appcompat.app.AppCompatActivity;

public class ExamActivity extends AppCompatActivity {

    private TextView tvQuestion, tvQuestionCount;
    private RadioGroup radioGroupOptions;
    private RadioButton option1, option2, option3, option4;
    private Button btnNext;
    private ProgressBar examProgressBar;

    private int currentQuestion = 0;
    private int score = 0;

    private String examName;

    // Fixed 5 questions
    private String[] questions = {
            "Which language is used for Android Development?",
            "Who invented Java Programming?",
            "What does HTML stand for?",
            "Which company developed Python?",
            "Which keyword is used to inherit a class in Java?"
    };

    private String[][] options = {
            {"Java", "Python", "C++", "Kotlin"},
            {"James Gosling", "Dennis Ritchie", "Bjarne Stroustrup", "Guido van Rossum"},
            {"Hyper Text Markup Language", "High Tech Modern Language", "Home Tool Markup Language", "Hyperlinks and Text Management Language"},
            {"Google", "Microsoft", "ABC", "Apple"},
            {"this", "super", "extends", "inherit"}
    };

    private int[] correctAnswers = {0, 0, 0, 2, 2}; // indexes of correct options

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_exam);

        // Get exam name from intent
        examName = getIntent().getStringExtra("examName");

        tvQuestion = findViewById(R.id.tvQuestion);
        tvQuestionCount = findViewById(R.id.tvQuestionCount);
        radioGroupOptions = findViewById(R.id.radioGroupOptions);
        option1 = findViewById(R.id.option1);
        option2 = findViewById(R.id.option2);
        option3 = findViewById(R.id.option3);
        option4 = findViewById(R.id.option4);
        btnNext = findViewById(R.id.btnNext);
        examProgressBar = findViewById(R.id.examProgressBar);

        loadQuestion();

        btnNext.setOnClickListener(v -> {
            int selectedId = radioGroupOptions.getCheckedRadioButtonId();
            if (selectedId == -1) {
                Toast.makeText(this, "Please select an option", Toast.LENGTH_SHORT).show();
                return;
            }

            int answerIndex = radioGroupOptions.indexOfChild(findViewById(selectedId));
            if (answerIndex == correctAnswers[currentQuestion]) {
                score++;
            }

            currentQuestion++;

            if (currentQuestion < questions.length) {
                loadQuestion();
            } else {
                // Exam finished -> return score to HomeActivity
                int percentage = (score * 100) / questions.length;

                Intent resultIntent = new Intent();
                resultIntent.putExtra("examName", examName);
                resultIntent.putExtra("score", percentage);

                setResult(RESULT_OK, resultIntent);
                finish();
            }
        });
    }

    private void loadQuestion() {
        tvQuestion.setText(questions[currentQuestion]);
        tvQuestionCount.setText("Question " + (currentQuestion + 1) + " of " + questions.length);

        option1.setText(options[currentQuestion][0]);
        option2.setText(options[currentQuestion][1]);
        option3.setText(options[currentQuestion][2]);
        option4.setText(options[currentQuestion][3]);

        radioGroupOptions.clearCheck();

        examProgressBar.setProgress(currentQuestion + 1);

        if (currentQuestion == questions.length - 1) {
            btnNext.setText("Finish");
        } else {
            btnNext.setText("Next");
        }
    }
}
