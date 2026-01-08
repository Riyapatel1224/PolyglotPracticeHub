//api function
const userModel = require("../models/UserModel");


const getAllUsers = async (req, res) => {

    const users = await userModel.find();
    res.json({
        message: "get all users api called...",
        data: users,
    });
};
const getUserById = (req, res) => {
    res.json({
        message: "get user by id called..",
        id: req.params.id,
    });
};

const addUser = async (req, res) => {

    console.log(req.body); //json data
    
    try {
        const savedUser = await userModel.create(req.body); 
        res.json({
            message: "post api called..",
            data: savedUser,
        });
    } catch (err) {
        res.json({
            err: err,
        });
    }
};

const deleteUser = async (req, res) => {
    try {
        const deletedUser = await userModel.findByIdAndDelete(req.params.id);
        console.log(deletedUser);
        if (deletedUser) {
            res.status(200).json({
                message: "user deleted..",
            });
        } else {
            res.status(404).json({
                message: "user not found.",
            });
        }
    } catch (err) {
        res.status(500).json({
            message: "error while deleting user",
        });
    }
};
const updateUser = async (req, res) => {
    const updatedUser = await userModel.findByIdAndUpdate(req.params.id, req.body, { new: true });
    if (updatedUser) {
        res.json({
            message: "user updated successfully",
            data: updatedUser,
        });
    } else {
        res.json({
            message: "user is not updated",
        });
    }
};


const addNewHobby = async (req, res) => {

    const hobby = req.body.hobby
    const id = req.params.id

    
    if (user.hobbie.includes(hobby)) {
        return res.status(400).json({ message: "Hobby already exists" });
    }


    try {
        const updatedUserafteraddhobby = await userModel.findByIdAndUpdate(id, { $push: { hobbies: hobby } }, { new: true })
        if (hobbies.find(hobby)==true) {
            res.json({
                message: "Duplicate value"
            })
        }
        else {
            res.json({
                message: "hobby addedd successfull",
                data: updatedUserafteraddhobby
            })
        }
    } catch (err) {
        res.json({
            message: "errir while adding hobby ",
            err: err
        })
    }


}


module.exports = {
    getAllUsers,
    getUserById,
    addUser,
    deleteUser,
    updateUser,
    addNewHobby
};