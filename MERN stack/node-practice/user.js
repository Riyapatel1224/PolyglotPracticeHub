var userName = "abc"
var userAge = 23

const demouser = (x) => {
    console.log("demouser function: ",x)
}

//export
// module.exports = userName
// module.exports = userAge


module.exports = {
    userName,userAge,demouser
}

