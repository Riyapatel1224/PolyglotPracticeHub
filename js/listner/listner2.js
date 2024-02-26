document.getElementsByName("circle")[0].addEventListener("click", () => {
    document.getElementsByName("circle").style.background = "red";
})

document.getElementsByName("circle")[1].addEventListener("dblclick", () => {
    document.getElementsByName("circle").innerHTML = "Double Click";
})

document.getElementsByName("circle")[2].addEventListener("mouseover", () => {
    document.getElementsByName("circle").style.height = 100;
})

