//  multer : Handles file uploads 
//  nodemailer : Sends email 
//  cloudinary : Uploads images to cloud 
//  path : used to extract file extensions

const multer = require('multer');
const path = require('path');

const storage = multer.diskStorage({
    destination: (req, file, cb) => {

        // cb = callback function
        // First parameter = error (null means no error)
        // Second parameter = folder name
        cb(null, 'uploads/');
    },

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
