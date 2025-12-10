package com.example.scheduler;

import android.app.DatePickerDialog;
import android.app.TimePickerDialog;
import android.content.DialogInterface;
import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import com.example.scheduler.R;

import java.util.Calendar;

public class CreateHabitActivity extends AppCompatActivity {

    private EditText etHabitName, etHabitDescription;
    private TextView tvFrequency, tvReminders, tvStartDate, tvEndDate;
    private View colorPreview;
    private Button btnSave;
    private ImageView backButton;

    // Defaults
    private String selectedFrequency = "Every Day";
    private String selectedTime = "19:00";
    private String startDate = "12.09.2025";
    private String endDate = "No End";
    private int selectedColor = Color.parseColor("#9C27B0");

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_create_habit);

        // Init views
        etHabitName = findViewById(R.id.etHabitName);
        etHabitDescription = findViewById(R.id.etHabitDescription);
        tvFrequency = findViewById(R.id.tvFrequency);
        tvReminders = findViewById(R.id.tvReminders);
        tvStartDate = findViewById(R.id.tvStartDate);
        tvEndDate = findViewById(R.id.tvEndDate);
        colorPreview = findViewById(R.id.colorPreview);
        btnSave = findViewById(R.id.btnSave);
        backButton = findViewById(R.id.backButton);

        // Back button
        backButton.setOnClickListener(v -> onBackPressed());

        // Frequency selector
        tvFrequency.setOnClickListener(v -> showFrequencyDialog());

        // Reminder time picker
        tvReminders.setOnClickListener(v -> showTimePicker());

        // Start date picker
        tvStartDate.setOnClickListener(v -> showDatePicker(true));

        // End date picker
        tvEndDate.setOnClickListener(v -> showDatePicker(false));

        // Color picker
        colorPreview.setOnClickListener(v -> showColorDialog());

        // Save button
        btnSave.setOnClickListener(v -> saveHabit());
    }

    private void showFrequencyDialog() {
        String[] options = {"Every Day", "Every Week", "Weekdays", "Weekends"};
        new AlertDialog.Builder(this)
                .setTitle("Select Frequency")
                .setItems(options, (dialog, which) -> {
                    selectedFrequency = options[which];
                    tvFrequency.setText(selectedFrequency);
                })
                .show();
    }

    private void showTimePicker() {
        Calendar calendar = Calendar.getInstance();
        int hour = 19, minute = 0;

        TimePickerDialog timePicker = new TimePickerDialog(
                this,
                (view, hourOfDay, minute1) -> {
                    selectedTime = String.format("%02d:%02d", hourOfDay, minute1);
                    tvReminders.setText(selectedTime);
                },
                hour, minute, true
        );
        timePicker.show();
    }

    private void showDatePicker(boolean isStartDate) {
        Calendar calendar = Calendar.getInstance();
        int year = calendar.get(Calendar.YEAR);
        int month = calendar.get(Calendar.MONTH);
        int day = calendar.get(Calendar.DAY_OF_MONTH);

        DatePickerDialog datePicker = new DatePickerDialog(
                this,
                (view, year1, month1, dayOfMonth) -> {
                    String date = String.format("%02d.%02d.%04d", dayOfMonth, (month1 + 1), year1);
                    if (isStartDate) {
                        startDate = date;
                        tvStartDate.setText(date);
                    } else {
                        endDate = date;
                        tvEndDate.setText(date);
                    }
                },
                year, month, day
        );
        datePicker.show();
    }

    private void showColorDialog() {
        String[] colors = {"Purple", "Blue", "Green", "Orange", "Red"};
        int[] colorValues = {
                Color.parseColor("#9C27B0"),
                Color.parseColor("#2196F3"),
                Color.parseColor("#4CAF50"),
                Color.parseColor("#FF9800"),
                Color.parseColor("#F44336")
        };

        new AlertDialog.Builder(this)
                .setTitle("Select Color")
                .setItems(colors, (dialog, which) -> {
                    selectedColor = colorValues[which];
                    colorPreview.setBackgroundColor(selectedColor);
                })
                .show();
    }

    private void saveHabit() {
        String name = etHabitName.getText().toString().trim();
        String description = etHabitDescription.getText().toString().trim();

        if (name.isEmpty()) {
            Toast.makeText(this, "Please enter a habit name", Toast.LENGTH_SHORT).show();
            return;
        }

        // For now: just show values
        String summary = "Habit: " + name +
                "\nDesc: " + description +
                "\nColor: " + selectedColor +
                "\nFreq: " + selectedFrequency +
                "\nTime: " + selectedTime +
                "\nStart: " + startDate +
                "\nEnd: " + endDate;

        Toast.makeText(this, "Saved:\n" + summary, Toast.LENGTH_LONG).show();

        // TODO: Save to Room DB later
        finish(); // go back to tasks screen
    }
}