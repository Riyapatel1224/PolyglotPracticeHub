// This file defines what user looks like

const mongoose = require('mongoose');

// Schema defines the structure of a document 
// Blueprint of how users should look
const userSchema = new mongoose.Schema({

    name: {
        type: String,
        required: true
    },

    email: {
        type: String,
        required: true,
        unique: true
    },

    age: {
        type: Number,
        required: true
    },

    status: {
        type: Boolean,
        default: true
    },
    hobbies: [String], //array of string
    
    bloodGroup: {
        type: String,
        enum: ['O+', 'O-', 'A+', 'A-', 'B+', 'B-', 'AB+', 'AB-']
    }

});

// This line creates a Model from your schema so you can interact with the database.
const userModel = mongoose.model('User', userSchema);
module.exports = userModel;