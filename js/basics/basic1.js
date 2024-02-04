// ---------------------------------
// 3 keywords --> 1) var 2) let 3) const

// var --> global scope
// let --> block scope     {}
// const --> block scope   {} --> final const aadharno = 12345




console.log("hello world");
console.info("hello world");
console.warn("hello world");
console.error("Hello world")


var a =10;
console.log("value of a =",a)
console.log("type of a = ",typeof(a))

var b = 10.5; 
console.log("value of b = ",b);
console.log("type of b = ",typeof(b))

var userName = "royal"; 
console.log("value of userName = ",userName);
console.log("type of userName = ",typeof(userName))

var isTrue = true; 
console.log("value of isTrue = ",isTrue);
console.log("type of isTrue = ",typeof(isTrue))

var x;
console.log("value of x = ",x);
console.log("type of x = ",typeof(x))

{
    var a =10
    let b=100
    console.log("value of b =",b)
}

console.log("value of a =",a)

const pi=3.14
console.log("value of pi = ",pi)