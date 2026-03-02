const express = require('express');
const router = express.Router();

const authMiddleware = require('../middleware/authMiddleware');
const userController = require('../controllers/userController.js');
const validateUser = require('../middleware/validationMiddleware');

router.post('/', validateUser,authMiddleware, userController.createUser);
router.get('/', authMiddleware,userController.getAllUsers);

module.exports = router;