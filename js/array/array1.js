var lang = ["hindi", "english", "marathi", "gujarati", "tamil"];


lang.push("telugu");
console.log(lang);
var deleted = lang.pop();
console.log(deleted);
console.log(lang);
lang.forEach((l) => {
    console.log(l)
})

lang.unshift("kannada");
console.log(lang);

var deleted = lang.shift();
console.log(deleted);
console.log(lang);



