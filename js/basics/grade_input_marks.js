console.log("Input marks out of 100")
var sub1 = parseInt(prompt("Enter the marks of sub 1:"))
console.log(sub1)
var sub2 = parseInt(prompt("Enter the marks of sub 2:"))
console.log(sub2)
var sub3 = parseInt(prompt("Enter the marks of sub 3:"))
console.log(sub3)
var sub4 = parseInt(prompt("Enter the marks of sub 4:"))
console.log(sub4)

total = sub1 + sub2 + sub3 + sub4
console.log("Total = ",total)
console.log(typeof(total))

avg = total/4
console.log("Avg = ",avg)
console.log(typeof(avg))

if(avg>=80)
{
    console.log("Grade A")
}
else if (avg >=70)
{
    console.log("Grade B")
}
else if (avg>=60)
{
    console.log("Grade C")
}
else if(avg>=50)
{
    console.log("Grade D")
}
else
{
    console.log("You are Fail.")
}