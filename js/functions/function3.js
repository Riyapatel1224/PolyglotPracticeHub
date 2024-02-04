

sname = prompt("Enter your name")


function isValid(name) {


    if (name.length < 3) {
        alert("Name should be greater than 3")
    }
    else {
        alert("Valid name   " + name)
    }

}

isValid(sname)