const express = require("express")
const router = express.Router()

// GET /user API
router.get("/user", (req, res) => {
    const user = {
        id: 1,
        name: "riya",
        age: 22
    }

    res.json({
        message: "user api called.",
        data: user
    })
})


// POST /user
router.post("/user", (req, res) => {
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