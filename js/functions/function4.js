function getUserData() {
    var n = prompt("Enter your name: ");
    var age = prompt("Enter your age: ");
    var email = prompt("Enter your email: ");
    var ph = prompt("Enter your phone number: ");
    return { n, age, email, ph };
}

function displayUserData(n, age, email, ph) {
    alert("Name: " + n + "\nAge: " + age + "\nEmail: " + email + "\nPhone Number: " + ph);
}

var userData = getUserData();
displayUserData(userData.n, userData.age, userData.email, userData.ph);
