const jwt = require("jsonwebtoken")
const secret = "alice"

const validateToken = (req, res, next) => {
    try {
        var token = req.headers.authorization
        if (token) {
            if (token.startsWith("Bearer ")) {
                token = token.split(" ")[1]
                next()
            }

            else {
                res.json({
                    message:"token is not bearer token"
                })
            }
        }
        else {
            res.json({
                message:"token is not present"
            })
        }
    }
    catch (err) {
        res.json({
            message: "auth failed",
            err:err
        })
    }
}

module.exports = {
    validateToken
}

















// const authMiddleware = (req, res, next) => {

//     // Get token from headers
//     const token = req.headers.authorization;

//     // If no token sent
//     if (!token) {
//         return res.status(401).json({
//             success: false,
//             message: "Unauthorized. No token provided."
//         });
//     }

//     // For now, we just check if token exists
//     // Later we can verify JWT here

//     next(); // Allow request to continue
// };

// module.exports = authMiddleware;