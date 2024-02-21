function formSubmit() {
    var name1 = document.getElementById("name");
    var email = document.getElementById("email");
    var lname = document.getElementById("lname");

    output.innerHTML = "Hi: " + name1.value + "<br>" + "email: " + email.value + "<br>" + "last name: " + lname.value;

}