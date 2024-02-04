var lang = ["hindi", "english", "marathi", "gujarati", "tamil"];
console.log(lang);


a=lang.some((l) => {return l.length >= 8})
console.log(a)

b=lang.every((l) => {return l.length > 5})
console.log(b)


var users = ["ram", "shyam", "hari", "gita", "sita", "rita", "rita", "priyanshi", "amita", "nancy"]

var c = users.includes("ram")
console.log(c)

var d = users.find((a) => {
    return a == "gita"
})
console.log(d)

function sortByLen(a,b)
{
    return a.length - b.length
}
var e = users.sort(sortByLen)
console.log(e)


var marks = [100, 20, 30, 40, 5, 34, 23, 455, 67, 89, 97, 4]

marks.sort((a, b) => {
    return a+b
})
console.log(marks)

marks.sort((a, b) => {
    return a-b
})
console.log(marks)
