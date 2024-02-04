//forEach,filter,map,reduce
//forEach will return void...
//map will return same size of an array
//filter will return based on condition
//reduce will return single value


var data = ["amit", "Raj", "parth", "raj", "amit", "raj", "kunal"]

data.forEach(d => {
    console.log(d)
});

var upperDate = data.map(d => d.toUpperCase())
console.log(upperDate)

var StartsWithR = data.filter(d => d.startsWith("R"))
console.log(StartsWithR);


var marks = [100, 20, 40, 50, 60]
var sum = marks.reduce((a, b) => a + b)
console.log(sum)