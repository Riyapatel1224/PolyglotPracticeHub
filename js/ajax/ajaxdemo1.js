const getDataFromFile = () => {
    const output = document.getElementById("output")
    const email = document.getElementById("email")
    const error = document.getElementById("error")
    const xhr = new XMLHttpRequest();
    xhr.open("GET", "data.json", true)
    xhr.send();
    xhr.onload = () => {
        const data = JSON.parse(xhr.responseText);
        console.log(xhr.responseText)
        // output.innerHTML = xhr.responseText;
        console.log(JSON.parse(xhr.responseText))
        var x = user.find((data) => data.email == email)
        if (x == undefined)
        {
            error.innerHTML("email is available")    
        }
        else
        {
            error.innerHTML("email is taken")    
        }
        
    }
}


