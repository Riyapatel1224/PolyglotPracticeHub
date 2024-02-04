var students = [
    {
        id: 101,
        name: "amit",
        age: 23,
        subjects: ["maths", "science", "english"]
    },
    {
        id: 102,
        name: "ram",
        age: 24,
        subjects: ["maths", "english"]
    },
    {
        id: 103,
        name: "raj",
        age: 25,
        subjects: ["maths", "science", "english"]
    }
]

// for (let i = 0; i < students.length; i++)
// {
//     console.log(students[i].name)
// }


// students.forEach(s => {
//     console.log(s.name)
//     console.log(s.age)
// })

// var sname = students.map(sn => {
//     return sn.name
// })
// console.log(sname)

var newStuObj = students.map(sobj => {
    return({
        sid: sobj.id - 100,
        name: sobj.name.toUpperCase(),
        age: sobj.age+10
    })
})

// console.log(newStuObj)

students.forEach(stu => {
    stu.subjects.forEach(sub => {
        console.log(sub)
    })
})

var newstu = students.map(stu => {
    return ({
        name: stu.name.toUpperCase(),
        subjecte: stu.subjects
    })
})
// console.log(newstu)

var newstu1 = students.map(stu => {
    return ({
        name: stu.name.toUpperCase(),
        subjects: stu.subjects.map(sub => {
            return sub.toUpperCase()
        })
    })
})
console.log(newstu1)

var newStudent1 = students.map((stu) => {

    return (
        {
            name: stu.name.toUpperCase(),
            subject: stu.subjects[0].toUpperCase()
        }
    )
})
console.log(newStudent1)