var lang = ["hindi", "english", "marathi", "gujarati", "tamil"];
console.log(lang);

lang.splice(3, 2) 
// console.log(lang);
lang.splice(1, 1, "kannada","nepali") 
// console.log(lang);
lang.splice(2, 3, "punjabi")
// console.log(lang);
var relement = lang.splice(2, 3, "punjabi")
console.log("removed element is " + relement);
