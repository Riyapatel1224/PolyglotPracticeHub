function getdata()
{
    var txt = document.getElementById("txt");
    txt.innerHTML = "Hello World";
    txt.style.color = 'red';
}

function getlink()
{
    var link = document.getElementById("link");
    link.href = "http://www.netflix.com";
    link.innerHTML = 'NETFLIX';
    link.target = '_blank';
}

function changeDiv()
{
    var mydiv = document.getElementById("mydiv");
    mydiv.className = "box"
}

function changeDiv1()
{
    var mydiv = document.getElementById("mydiv");
    mydiv.className = "box1"
}