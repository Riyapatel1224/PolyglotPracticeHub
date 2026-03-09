const mongoose = require('mongoose');

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
    password: {
        type: String
    },
    profilePic: {
        type:String
    }
});

const userModel = mongoose.model('User', userSchema);
module.exports = userModel;