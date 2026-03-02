const authMiddleware = (req, res, next) => {

    // Get token from headers
    const token = req.headers.authorization;

    // If no token sent
    if (!token) {
        return res.status(401).json({
            success: false,
            message: "Unauthorized. No token provided."
        });
    }

    // For now, we just check if token exists
    // Later we can verify JWT here

    next(); // Allow request to continue
};

module.exports = authMiddleware;