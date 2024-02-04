function goa(name, amount) {

    console.log("goa");
    return name + " hi message from goa and amount is " + amount;
}
function amstrdam(name, amount) {

    console.log("amstrdam");
    return name + " hi message from amstrdam and amount is " + amount;
}
function lasVegas(name, amount) {

    console.log("lasVegas");
    return name + " hi message from lasVegas and amount is " + amount;
}

function prague(name, amount) {

    console.log("prauge");
    return name + " hi message from prague and amount is " + amount;
}

function vacation(cb, name, amount) {

    var x = cb(name, amount)
    console.log(x)
}

var amount = 11000;

if (amount > 10000) {
    vacation(amstrdam, "abc", amount)
}
else if (amount > 5000) {
    vacation(lasVegas, "abc", amount)
}
else if (amount > 2000) {
    vacation(prague, "abc", amount)
}
else {
    vacation(goa, "abc", amount)
}