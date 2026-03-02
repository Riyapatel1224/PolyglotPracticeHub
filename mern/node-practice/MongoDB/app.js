// This file connectes everything
// Imports
const express = require('express');
const  connectDB  = require('./connection.js');
const userModel = require('./models/userModel.js');

// create express app
const app = express();

// Middleware
app.use(express.json());

// Connect to DB
connectDB().then(() => {
    console.log('DB Connection Established');
}).catch((err) => {
    console.log('Error Connecting the DB', err);
});

// When nothing is specified
app.get("/", (req, res) => {
    res.send("Home Page");
});

// GET - Fetch all users from database
app.get('/api/users', async (req, res) => {
    try {

        // userModel.find() : Gets all document from the database 
        const users = await userModel.find();

        res.json({
            success: true,
            message: `Retrieved ${users.length} users`,
            data: users
        });
    }
    catch (error) {
        console.log(error);
        res.status(500).json({
            success: false,
            message: 'Error fetching the users',
            error: error.message
        });
    }
});

// GET - Fetch one user by ID
app.get('/api/users/:id', async (req, res) => {
    try {
        const userId = req.params.id;
        const user = await userModel.findById(userId);

        if (!user) {
            return res.status(404).json({
                success: false,
                message: `User with ID ${userId} not found`
            });
        }

        res.json({
            success: true,
            message: 'User retrieved successfully',
            data: user
        });
    }
    catch (error) {
        res.status(500).json({ // Something went wrong on the server side.
            success: false,
            message: 'Error fetching user',
            error: error.message
        });
    }
});

// POST - Create a new user
app.post('/api/users', async (req, res) => {
    try {
        // Extract data from the request body
        const { name, email, age, status, hobbies, bloodGroup } = req.body;
        
        // Create a new user Object
        const newUser = new userModel({
            name, email, age, status, hobbies, bloodGroup
        });

        //save to database
        // save() is an async operation we wait for it to complete 
        const savedUser = await newUser.save();
        console.log('User Created', savedUser);

        res.status(201).json({
            success: true,
            message: 'User created successfully',
            data: savedUser
        });
    }
    catch (error) {
        console.log('Error creating user: ', error);
        res.status(500).json({
            success: false,
            message: 'Error creating user',
            error: error.message
        });
    }
});

// PUT : Update a user
app.put('/api/users/:id', async (req, res) => {
    try {
        const userId = req.params.id;
        const updateData = req.body;

        //{new:true} returns the updated data
        const updatedUser = await userModel.findByIdAndUpdate(
            userId,
            updateData,
            { new: true }
        );

        if (!updatedUser) {
            return res.status(404).json({
                success: false,
                message: `User with ID ${userId} not found`
            });
        }
        console.log('User Updated', updatedUser);
        res.json({
            success: true,
            message: 'User updated successfully',
            data: updatedUser
        });
    }
    catch (error) {
        console.log('Error updating user');
        res.status(500).json({
            success: false,
            message: 'Error updating user',
            error: error.message
        });
    }
});

// DELETE = remove a user
app.delete('/api/users/:id', async (req, res) => {
    try {
        const userId = req.params.id;

        const deletedUser = await userModel.findByIdAndDelete(userId);
        if (!deletedUser) {
            return res.status(404).json({
                success: false,
                message: `User with ${userId} not found`
            });
        }
        console.log('User Deleted: ', deletedUser);
        res, json({
            success: true,
            message: 'User deleted successfully',
            data: deletedUser
        });
    }
    catch (error) {
        console.log('Error while deleting user', error);
        res.status(500).json({
            success: false,
            message: 'Error deleting user',
            error: error.message
        });
    }
});

app.use((req, res) => {
    res.status(404).json({
        success: false,
        message: `Route ${req.method} ${req.path} not found`
    });
});

// Start the server
const PORT = 3000;
app.listen(PORT, () => {
    console.log(`Server Running at ${PORT}`);
});