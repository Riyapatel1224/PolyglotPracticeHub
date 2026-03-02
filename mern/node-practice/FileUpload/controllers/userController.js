const userModel = require('../models/userModels');
const bcrypt = require("bcrypt");

// CREATE USER WITH FILE UPLOAD
exports.createUser = async (req, res) => {
    try {
        const profilePic = req.file ? req.file.filename : null;

        const hashedPassword = bcrypt.hashSync(req.body.password, 12);
        const newUser = new userModel({
            // Spread all form fields (name, email, age etc.)
            ...req.body,
            password:hashedPassword
            // profilePic: profilePic
        });

        const savedUser = await newUser.save();

        res.status(201).json({
            success: true,
            data: savedUser
        });
    }
    catch (error) {

        // If something fails (DB error etc.)
        res.status(500).json({
            success: false,
            error: error.message
        });
    }
};





// GET ALL USERS
exports.getAllUsers = async (req, res) => {
    try {
        //fetched all document from the user collection
        const users = await userModel.find();

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

// GET USER BY ID
exports.getUserById = async (req, res) => {
    try {
        const user = await userModel.findById(req.params.id);
        // If no user found
        if (!user) {
            return res.status(404).json({
                success: false,
                message: "User Not Found"
            });
        }
        // If user exists
        res.json({
            success: true,
            data: user
        });
    }
    catch (error) {
        res.status(500).json({
            success: false,
            error: error.message
        });
    }
};


// CREATE NEW USER
// exports.createUser = async (req, res) => {
//     try {
//         const newUser = new userModel(req.body);
//         const savedUser = await newUser.save();

//         res.status(201).json({
//             success: true,
//             data: savedUser
//         });
//     }
//     catch (error) {
//         res.status(500).json({
//             success: false,
//             error: error.message
//         });
//     }
// };

// // UPDATE USER
// exports.updateUser = async (req, res) => {
//     try {
//         // findByIdAndUpdate parameters:
//         // 1) ID
//         // 2) New data
//         // 3) { new: true } → return updated document
//         const updatedUser = await userModel.findByIdAndUpdate(req.params.id, req.body, { new: true });

//         if (!updatedUser) {
//             return res.status(404).json({
//                 success: false,
//                 message: "User not found"
//             });
//         }
//         res.json({
//             success: true,
//             data: updatedUser
//         });
//     }
//     catch (error) {
//         res.status(500).json({
//             success: false,
//             error: error.message
//         });
//     }
// }

// DELETE USER
exports.deleteUser = async (req, res) => {
    try {
        const deletedUser = await userModel.findByIdAndDelete(req.params.id);

        if (!deletedUser) {
            return res.status(404).json({
                success: false,
                message: "User not found"
            });
        }
        res.json({
            success: true,
            data: deletedUser
        });
    }
    catch (error) {
        res.status(500).json({
            success: false,
            error: error.message
        });
    }
}

exports.loginUser = async (req, res) => {
    const { email, password } = req.body;

    try {
        const foundUserFromEmail = await userModel.findOne({ email: email })

        if (foundUserFromEmail) {
            if (bcrypt.compareSync(password, foundUserFromEmail.password)) {
                // const token = jwt.sign(foundUserFromEmail.toObject(), secretKey, { expiresIn: 60 })
                res.json({
                    message: "login success..",
                    // token: token
                    user: foundUserFromEmail
                })
            }
            else {
                res.json({
                    message: "invalid credentials.."
                })
            }
        }
        else {
            res.json({
                message: "user not found signup first,"
            })
        }
    }
    catch (err) {
        console.log(err)
        res.json({
            message: "error while login.",
            err: err,
        });
    }
 }

