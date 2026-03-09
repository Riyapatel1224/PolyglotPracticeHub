const path = require('path');
require('dotenv').config({
    path: path.resolve(__dirname, '.env')
});

const express = require('express');
const connectDB = require('./connection');

const app = express();
app.use(express.json());

const userRoutes = require('./routes/userRoutes.js');
// const roleRoutes = require('./routes/roleRoutes.js');

connectDB();
// Debug: Check if env variables loaded
console.log("EMAIL_USER:", process.env.EMAIL_USER ? "Loaded" : "Not Loaded");
console.log("EMAIL_PASS:", process.env.EMAIL_PASS ? "Loaded" : "Not Loaded");


// Attach routes
app.use('/api/users', userRoutes);
// app.use('/api/roles', roleRoutes);

// 404
app.use((req, res) => {
    res.status(404).json({
        message: "Route not found"
    });
});

app.listen(3000, () => {
    console.log("Server running on port 3000");
});