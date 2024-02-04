var num = 3;
var count = 0;

for (let i = 2; i <= Math.sqrt(num); i++) {
  if (num % i === 0) {
    count++;
    break; 
  }
}

if (count === 0) {
  console.log(num, "is prime");
} else {
  console.log(num, "is not prime");
}