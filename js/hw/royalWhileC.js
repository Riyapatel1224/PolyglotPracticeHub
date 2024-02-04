// var i = 1;
// var sum = 0;
// while (i <= 10) {
//   console.log(i);
//   i++;
//   sum = sum + i;
// }
// console.log("Sum = ", sum);


// var i = 1;
// while (i <= 10) {
//   console.log(i);
//   i++;
// }


// var i;
// var k;
// var sum = 0;
// var num = parseInt(prompt("Enter the number:"));
// console.log(num);
// var k = num;
// while ((num = !0)) {
//   i = num % 10;
//   sum = sum + i * i * i;
//   num = Math.floor(num / 10);
// }
// if (sum == k) {
//   console.log("It is armstrong num");
// } else {
//   console.log("It is not armstrong num");
// }


// var no = 5; 
// var fact = 1;
// var i = 1;
// while (i <= no) {
//   fact = fact * i;
//   i++;
// }
// console.log(fact);


// var num = parseInt(prompt("Enter the number : "));
// var ft = 0;
// var st = 1;
// var i = 1;
// var nt;
// while (i <= num) {
//   console.log(ft);

//   nt = ft + st;
//   ft = st;
//   st = nt;

//   i++;
// }


// var num = 198799;
// var i = 0;
// while (num != 0) {
//   num = Math.floor(num / 10);
//   i++;
// }
// console.log("Length of didgit = ", i);


// var no = 1221;
// var no1;
// var i;
// var sum = 0;
// no1 = no;
// while (no > 0) {
//   i = no % 10;
//   sum = sum * 10 + i;
//   no = Math.floor(no / 10);
// }
// if (sum == no1) {
//   console.log("palindrome no.");
// } else {
//   console.log("Not palindrome no.");
// }    


// var i = 1;
// var m = 1;
// var power;
// var num = parseInt(prompt("Enter the number :"));
// console.log("num = ", num);
// var power = parseInt(prompt("Enter the power :"));
// console.log("power = ", power);

// while (i <= power) {
//   m = m * num;
//   i++;
// }
// console.log("power = ", m);


// var no = 345;
// var count = 0;
// var rem = 0;
// var rev = 0;

// while (no > 0) {
//   rem = no % 10;
//   rev = rev * 10 + rem;
//   no = Math.floor(no / 10);
// }
// console.log(rev);

// var num = 263;
// var sum = 0;
// var rem = 0;
// while (num > 0) {
//   rem = num % 10;
//   sum = sum + rem;
//   num = Math.floor(num / 10);
// }
// console.log("Sum of digit = ", sum);

// var num = 15621;
// var sum = 0;
// var digit;
// while (num > 0) {
//   digit = num % 10;

//   if (digit % 2 !== 0) {
//     sum = sum + digit;
//   }

//   num = Math.floor(num / 10);
// }

// console.log("Sum of odd digits: ", sum);


// var no = 123;
// var m = 1;
// var sum = 0;
// while (no > 0) {
//   i = no % 10;
//   sum = sum + i;
//   m = m * i;
//   no = Math.floor(no / 10);
// }
// if (sum == m) {
//   console.log("Twin number");
// } else {
//   console.log("Not a twin number ");
// }

// var no = 5; 
// var fact = 1;
// var i = 1;
// do {
//   fact = fact * i;
//   i--;
// } while (no > 0);
// console.log(fact);

// var i = 1;
// var m = 1;
// var power;
// var num = parseInt(prompt("Enter the number :"));
// console.log("num = ", num);
// var power = parseInt(prompt("Enter the power :"));
// console.log("power = ", power);

// do {
//   m = m * num;
//   i++;
// } while (i <= power);
// console.log("power = ", m);