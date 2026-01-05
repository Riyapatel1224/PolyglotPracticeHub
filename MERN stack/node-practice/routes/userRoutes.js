const express = require("express")
const router = express.Router()

// GET /user API
router.get("/user/:id", (req, res) => {
    const userId = req.params.id
    const user = {
        id: userId,
        name: "riya",
        age: 22
    }

    res.json({
        message: "user ID received.",
        data: { userId ,user}
    })
})


// POST /user
router.post("/user/:id", (req, res) => {
    const userData = req.body
    console.log(req.body)

    res.json({
        message: "User Data received",
        data: userData
    })
})

module.exports = router

// GET is used to retrieve data from the server.
// POST is used to send data to the server.