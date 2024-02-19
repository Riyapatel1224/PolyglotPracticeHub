function myInput()
{
    var name1 = document.getElementById("name");
    var nameText = document.getElementById("nameText")
    var output = document.getElementById("output");
    output.innerHTML = "hello " + name1.value;
    if (name1.value.length <= 3)
    {

        name1.style.outline = "1px solid red";
        nameText.innerHTML = "Name has to be atleast 3 character";   
    }
    else
    {
        name1.style.outline = "1px solid green";
        nameText.innerHTML = "";
        output.innerHTML = "hello " + name1.value;
    }
}