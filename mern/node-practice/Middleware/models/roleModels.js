const mongoose = require('mongoose');

const roleSchema = new mongoose.Schema({
    name: {
        type: String,
        require: true,
        unique: true
    }
});

const roleModel = mongoose.model('Role', roleSchema);
module.exports = roleModel;