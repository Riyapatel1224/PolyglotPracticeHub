//  multer : Handles file uploads 
//  nodemailer : Sends email 
//  cloudinary : Uploads images to cloud 
//  path : used to extract file extensions

const multer = require('multer');

// built-in Node module used for handling file paths safely
const path = require('path');

// built-in node module used to work with file system (create folders, check existence)
const fs = require('fs');

// __dirname gives the current folder path of this file (middleware folder),  We move one level up using '../uploads'
const uploadPath = path.join(__dirname, '../uploads');

// to check if the uploads folder exist if not than create one
if (!fs.existsSync(uploadPath)) {
    fs.mkdirSync(uploadPath);
}

// configuration
const storage = multer.diskStorage({
    destination: (req, file, cb) => {

        // cb = callback function
        // First parameter = error (null means no error)
        // Second parameter = folder name
        cb(null, uploadPath);
    },

    // saved file name should be 
    filename: (req, file, cb) => {

        // Date.now() ensures unique file name
        // path.extname(file.originalname) keeps original extension (.png, .jpg)
        const uniqueName = Date.now() + path.extname(file.originalname);

        cb(null, uniqueName);
    }
});

// Create upload middleware using storage configuration
const upload = multer({ storage });
module.exports = upload;
