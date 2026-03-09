const express = require('express');
const router = express.Router();
const sendEmail = require("../utils/emailUtils.js");

const upload = require('../middleware/uploadMiddleware.js');
const authMiddleware = require('../middleware/authMiddleware');
const userController = require('../controllers/userController.js');
const validateUser = require('../middleware/validationMiddleware');

router.post('/', upload.single('profilePic'),validateUser,userController.createUser);
// router.get('/', authMiddleware.validateToken, userController.getAllUsers);
router.get('/', userController.getAllUsers);
router.post("/login", userController.loginUser)
router.post("/forgot-password", userController.forgotPassword);



module.exports = router;