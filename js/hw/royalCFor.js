// 47 WAP to print 1 to 100 (ascending ) & 100 to 1 (reverse )

// for (let i = 1; i <= 100; i++)
// {
//     console.log(i)
// }
// for (let i = 100; i >= 1; i--)
// {
//     console.log(i)
// }

// 48.WAP find Factorial of a given number

// var num = 5;
// var fact = 1;
// for (let i = 1; i <= 5; i++)
// {
//     fact = fact * i;
// }
// console.log(fact)

// 49.WAP to find Reverse no.

// var no = 154;
// var count = 0;
// var rem = 0;
// var rev = 0;

// while (no > 0) {
//   rem = no % 10;
//   rev = rev * 10 + rem;
//   no = Math.floor(no / 10);
// }
// console.log(rev);

// 50. WAP to print no’s between no1. To no2.

// var no1 = 10;
// var no2 = 22;
// for (let i = no1; i <= no2; i++)
// {
//     console.log(i)
// }

// 51.WAP to print Only even no’s between two no’s

// var no1 = 10;
// var no2 = 22;
// for (let i = no1; i <= no2; i++)
// {
//     if (i % 2 == 0)
//     {
//         console.log(i);
//     }
// }

// 52.WAP to print Table of any entered number

// var table = 5;
// for (let i = 1; i <= 10; i++)
// {
//     console.log(table,"*",i,"=",i*table)
// }

// 53.WAP to check whether no. is prime or not

// var num = 6;
// var count = 0;

// for (let i = 2; i <= Math.sqrt(num); i++) {
//   if (num % i === 0) {
//     count++;
//     break;
//   }
// }

// if (count === 0) {
//   console.log(num, "is prime");
// } else {
//   console.log(num, "is not prime");
// }

// 54. WAP to print series as 1 + x1 + x2 + x3 +x4…..xn

// var x = 2;
// var n = 2;
// var sum = 1;
// for (let i = 1; i <= n; i++)
// {
//     sum += Math.pow(x, i);
// }
// console.log(sum)

// 55. WAP to print series as 1-3+5-7+9……n
