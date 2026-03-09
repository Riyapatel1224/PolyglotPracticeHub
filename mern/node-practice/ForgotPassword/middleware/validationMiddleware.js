const userValidationSchema = require('../validationSchema/userValidationSchema');

const validateUser = (req, res, next) => {
    try {

        // parse() validates and throws error if invalid
        userValidationSchema.parse(req.body);
        next();
    }
    catch (error) {
        return res.status(400).json({
            success: false,
            message: error.issues[0].message
        });
    }
};

module.exports = validateUser;