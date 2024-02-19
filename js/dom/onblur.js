function checkAvail()
{
    emailData=["a@gmail.com","b@gmail.com","c@gmail.com"]
    var email = document.getElementById("email");
    var emailer = document.getElementById("emailer");

    if (emailData.includes(email.value))
    {
        emailer.innerHTML = "Email already taken";
        email.style.outline = "1px solid red";

    }
    else
    {
        emailer.innerHTML = "email is available";
    }

}