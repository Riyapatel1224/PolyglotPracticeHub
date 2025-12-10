package com.example.scheduler.model;

public class Habit {
    public String name;
    public String description;
    public String frequency;
    public String reminderTime;
    public String startDate;
    public String endDate;
    public int color;

    public Habit(String name, String description, String frequency,
                 String reminderTime, String startDate, String endDate, int color) {
        this.name = name;
        this.description = description;
        this.frequency = frequency;
        this.reminderTime = reminderTime;
        this.startDate = startDate;
        this.endDate = endDate;
        this.color = color;
    }

    public String getName() { return name; }
    public String getDescription() { return description; }
    public String getFrequency() { return frequency; }
    public String getReminderTime() { return reminderTime; }
    public String getStartDate() { return startDate; }
    public String getEndDate() { return endDate; }
    public int getColor() { return color; }

}
