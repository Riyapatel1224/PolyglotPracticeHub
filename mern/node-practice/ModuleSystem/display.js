const user = require("./userUtils");
const emp = require("./employeeUtils");

console.log("=== USER INFO ===");
console.log("Name:", user.userName);
console.log("Age:", user.userAge);
console.log("Greetings:", user.greetUser(user.userName));
console.log("Status:", user.validateAge(user.userAge));

console.log("\n=== EMPLOYEE INFO ===");
console.log("Name:", emp.empName);
console.log("Salary:", emp.empSalary);
console.log("Bonus:", emp.calculateBonus(emp.empSalary));