document.getElementsByName("box")[0].addEventListener("mouseover", () => {
    document.getElementsByName("box")[0].style.backgroundColor = "red";
})

document.getElementsByName("box")[0].addEventListener("click", () => {
    document.getElementsByName("box")[0].style.height = "200px";
    document.getElementsByName("box")[0].style.width = "200px";
    document.getElementsByName("box")[0].style.borderRadius = "0%"
    document.getElementsByName("box")[0].style.backgroundColor = "teal";

})

document.getElementsByName("box")[0].addEventListener("dblclick", () => {
    document.getElementsByName("box")[0].style.height = "200px";
    document.getElementsByName("box")[0].style.width = "200px";
    document.getElementsByName("box")[0].style.borderRadius = "0%"
    document.getElementsByName("box")[0].style.backgroundColor = "purple";
})