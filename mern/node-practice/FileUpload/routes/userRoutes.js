const express = require('express');
const router = express.Router();

const upload = require('../middleware/uploadMiddleware.js');
const authMiddleware = require('../middleware/authMiddleware');
const userController = require('../controllers/userController.js');
const validateUser = require('../middleware/validationMiddleware');

router.post('/', upload.single('profilePic'),validateUser, authMiddleware, userController.createUser);
router.get('/', authMiddleware, userController.getAllUsers);
router.post("/login", userController.loginUser)

module.exports = router;