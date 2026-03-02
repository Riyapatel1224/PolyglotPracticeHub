const express = require('express');
const connectDB = require('./connection');
const userRoutes = require('./Routes/userRoutes');
const app = express();
app.use(express.json());

// Connect to DB
connectDB().then(() => {
    console.log('DB Connection Established');
}).catch((err) => {
    console.log('Error Connecting the DB', err);
});

app.get('/', (req, res) => {
    res.send("HOME PAGE");
});

// All routes starting with /api/users will go to userRoutes
app.use('/api/users', userRoutes);

// 404 handler 
app.use((req, res) => {
    res.status(404).json({
        success: false,
        message: `Route ${req.method} ${req.path} not found`
    });
});

const PORT = 3000;

app.listen(PORT, () => {
    console.log(`Server running on port ${3000}`);
})