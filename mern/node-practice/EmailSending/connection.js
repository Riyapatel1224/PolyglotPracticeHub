// Importing mongoose
const mongoose = require('mongoose');

const mongoDB = 'mongodb://localhost:27017/node-p';

// COnnecting to MongoDB
const connectDB = async () => {
    try {
        // mongoose.connect() establishes connection to MongoDB
        await mongoose.connect(mongoDB);
        console.log('MongoDB has Connected successfully');
    }
    catch (error) {
        console.log('MongoDB connection Failed', error);
        process.exit(1); // Stop the application
    }
};

// Export the function for other files to use 
module.exports = connectDB;
