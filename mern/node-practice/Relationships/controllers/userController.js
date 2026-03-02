const userModel = require('../models/userModel');

// Create User
exports.createUser = async (req, res) => {
    try {
        const newUser = new userModel(req.body);
        const savedUser = await newUser.save();

        res.status(201).json({
            success: true,
            data: savedUser
        });

    }
    catch (error) {
        res.status(500).json({
            success: false,
            error: error.message
        });
    }
};

// GET ALL USERS WITH ROLE DETAILS
exports.getUsers = async (req, res) => {
    try {
        const users = await userModel.find().populate('role');
        res.json({
            success: true,
            data: users
        });
    }
    catch (error) {
        res.status(500).json({
            success: false,
            error: error.message
        });
    }
};