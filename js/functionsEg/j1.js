var n = "Riya Patel";
console.log(n, "type", typeof n);
console.log("length : ", n.length);
for (let i = 0; i < n.length; i++) {
  console.log("lenght: ", i);
}
console.log(n[3]);
x = n.charAt(2);
y = n.codePointAt(2);
console.log(x);
console.log(y);

fullName = n.concat(" Vipulkumar");
console.log(fullName);

fullName = n + " Patel";
console.log(fullName);

var email = "  ram@gamil.com  ";

var email1 = email.trim();
console.log(email1.length);
console.log(email1);

var email2 = email.trimStart();
console.log(email2.length);
console.log(email2);

var email3 = email.trimEnd();
console.log(email3.length);
console.log(email3);
