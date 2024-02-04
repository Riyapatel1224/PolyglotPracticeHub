// const isEligible = (alive, age) =>
//     alive == true ?
//         age >= 81 ?
//             "Alive and age is greater than 81" :
//         "less than 81" :
//     "dead"

// ans = isEligible(true, 19)
// console.log(ans)

const checkName = (name) =>
    name[0] == "R" || "r" ?
        name.length > 4 ?
            "Perfect" :
            "Name too short" :
        "not starting with R"

var name1 = "rohan";
var ans = checkName(name1);
console.log(ans);
