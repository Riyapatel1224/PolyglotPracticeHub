function test() {

    console.log("without return type and without arguments")

}


function add(a, b) {

    let c = a + b;
    return c;
}

function sub(a, b, c) {


    let x = a - b - c;
    console.log("Sub = " + x);
}



function getData() {


    return "Hi this is India"
}



test();

var ans = add(10, 20)
console.log("Ans = " + ans);

sub(100, 20, 30)


var data = getData()
console.log("Data = ", data);