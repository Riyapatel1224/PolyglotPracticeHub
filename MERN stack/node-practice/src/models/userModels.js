const mongoose = require("mongoose")
const Schema = mongoose.Schema; //class object

const userModel = new Schema({
  
    name: {
        type: String
    },
    age: {
        type: String,
        required: true
    },
    status: {
        type: Boolean,
        default: true
    },
    hobbies: [
        {
            type: String
        }
    ],
    bloodGroup: {
        type: String,
        enum: ["A+", "A-", "B+", "B-"]
    }
})
module.exports = mongoose.model("users", userModel)