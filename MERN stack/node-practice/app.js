const express = require("express")
const app = express()
app.use(express.json())


// import routes
const userRoutes = require("./routes/userRoutes")

// middleware
app.use((req, res, next) => {
    console.log("Request URL:", req.url)
    next()
})
app.use(userRoutes)

// server creation
const PORT = 3000
app.listen(PORT, () => {
    console.log(`server started on port ${PORT}`)
})



//==============================================================================================================


// const express = require("express")
// const app = express()


// // import routes
// const userRoutes = require("./routes/userRoutes")

// // middleware
// app.use((req, res, next) => {
//     console.log("Request URL:", req.url)
//     next()
// })
// app.use(userRoutes)

// // server creation
// const PORT = 3000
// app.listen(PORT, () => {
//     console.log(`server started on port ${PORT}`)
// })

// // test api
// app.get("/", (req, res) => {
//     res.send("Server is running")
// })



//==============================================================================================================



// var no1 = 100
// console.log(no1)

// //For Import : require statement 

// const user = require("./user")
// console.log(user)

// user.demouser(100)

// const express = require("express")
// const app = express()

// //server creation
// const PORT = 3000
// app.listen(PORT, () => {
//     console.log(`server started on port ${PORT}`)
// })

// //first api

// app.get("/test", (req, res) => {
//     console.log("/test api called..")
//     res.send("test api")
// })

// app.get("/user", (req,res) => {
//     const user = {
//         id: 1,
//         name: "riya",
//         age: 22
//     }

//     res.json({
//         message: "user api called.",
//         data:user
//     })
// })


