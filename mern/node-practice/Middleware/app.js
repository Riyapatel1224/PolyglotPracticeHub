const express = require('express');
const connectDB = require('./connection');

const userRoutes = require('./routes/userRoutes.js');
const roleRoutes = require('./routes/roleRoutes.js');

const app = express();

app.use(express.json());

connectDB();

// Attach routes
app.use('/api/users', userRoutes);
app.use('/api/roles', roleRoutes);

// 404
app.use((req, res) => {
    res.status(404).json({
        message: "Route not found"
    });
});

app.listen(3000, () => {
    console.log("Server running on port 3000");
});