const roleModel = require('../models/roleModels');

// CREATE ROLE
exports.createRole = async (req, res) => {
    try {
        const newRole = new roleModel(req.body);
        const savedRole = await newRole.save();

        res.status(201).json({
            success: true,
            data: savedRole
        });


    }
    catch (error) {
        res.status(500).json({
            success: false,
            error: error.message
        });
    }
};

// GET ALL ROLES
exports.getRoles = async (req, res) => {
    try {
        const role = await roleModel.find();
        res.json({
            success: true,
            data: role
        });
    }
    catch (error) {
        res.status(500).json({
            success: false,
            error: error.message
        });
    }
};