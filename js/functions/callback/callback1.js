function add(x,y) {
    console.log(x+y);
}

function sub(x,y) {
    console.log(x-y);
}

function test(a, value) {
    console.log("User has choosen : ", a);
    console.log(value);
    value(10,20);
}



var option = "sub"
if (option == "add") {
    test("add", add);
}
else {
    test("sub", sub);
}
