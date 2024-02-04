var company = [
    {
        name: "Google",
        employees: [
            {
                id: 101,
                name: "Steve",
                age: 32,
                salary: 10000,
                designation: "Developer",
                gender: "male",
                isMarried: true,
                child: 2,
            },
            {
                id: 102,
                name: "Seeta",
                age: 29,
                salary: 1000,
                designation: "Developer",
                gender: "female",
                isMarried: false,
                child: 0,
            },
            {
                id: 103,
                name: "rima",
                age: 36,
                salary: 12000,
                designation: "Developer",
                gender: "female",
                isMarried: true,
                child: 1,
            },
        ],
    },
    {
        name: "Microsoft",
        employees: [
            {
                id: 101,
                name: "bill",
                age: 45,
                salary: 90000,
                designation: "Developer",
                gender: "male",
                isMarried: true,
                child: 2,
            },
            {
                id: 102,
                name: "sita",
                age: 29,
                salary: 1000,
                designation: "Developer",
                gender: "female",
                isMarried: false,
                child: 0,
            },
        ],
    },
];

//1. find all employees of google

// const empGoogle = company.find((d) => d.name == "Google").employees
// console.log(empGoogle);


//2 find all female employee of microsoft

// const feEmpMicro = company.find((d) => d.name == "Microsoft").employees.filter((emp) => emp.gender == "female")
// console.log(feEmpMicro)

//3) find all married employee of google

// const marEmpGoogl = company.find((d)=>d.name=="Google").employees.filter((emp)=>emp.isMarried==true)
// console.log(marEmpGoogl)

//4) find all employee whose salary is greater than 10000

const highSalEmp = company.filter((d) => d.employees.filter((emp) => emp.salary > 10000))
console.log(highSalEmp)

//5) find all employee from microsoft who is having child

// const microChild = company.find((d) => d.name == "Microsoft").employees.filter((emp) => emp.child != 0)
// console.log(microChild)

//6)find female employee from google who is single

// const singleFeGoogle = company.find((d) => d.name == "Google").employees.filter((emp) => emp.gender == "female" && emp.isMarried == false)
// console.log(singleFeGoogle)