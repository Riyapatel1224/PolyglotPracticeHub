const mongoose = require('mongoose');

const userSchema = new mongoose.Schema({
    name: {
        type: String,
        require: true
    },

    email: {
        type: String,
        require: true,
        unique: true
    },
    age: {
        type: Number,
        require: true
    },
    role: {
        type: mongoose.Schema.Types.ObjectId,
        ref: 'Role',
        require: true
        
    }
});

const userModel = mongoose.model('User', userSchema);
module.exports = userModel;