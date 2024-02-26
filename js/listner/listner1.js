document.getElementById("btn").addEventListener("click", () => {
    console.log('Button clicked');
})

document.getElementById("btn").addEventListener("dblclick", () => {
    document.getElementById("btn").innerHTML = "Double Click";
})

document.getElementById("btn").addEventListener("mouseover", () => {
    document.getElementById("btn").style.background="red";
})

