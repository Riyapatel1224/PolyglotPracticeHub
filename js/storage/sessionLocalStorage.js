function storeData()
{
    localStorage.setItem("id", 101);
    localStorage.setItem("name", "Ravi");

    sessionStorage.setItem("id", 101);
    sessionStorage.setItem("dept", "IT");
    
    var user = {
        id: 1,
        name: "Ravi",
    }

    localStorage.setItem("user", JSON.stringify(user))
}

function removeData()
{
    // localStorage.removeItem("id");
    // localStorage.removeItem("name");
    
    // sessionStorage.removeItem("id");
    // sessionStorage.removeItem("dept");

    localStorage.clear();
    sessionStorage.clear();

}

function getData()
{
    var id = localStorage.getItem("id");    
    var name = localStorage.getItem("name");    

    console.log("id is ", id);
    console.log("name is ", name);

    var user = localStorage.getItem("user")
    console.log("User is ", user)
    console.log(user.name)
    console.log(typeof user)

    var userObj = JSON.parse(user)
    console.log("User is ", userObj)
    console.log(userObj.name)
    console.log(typeof userObj)
}