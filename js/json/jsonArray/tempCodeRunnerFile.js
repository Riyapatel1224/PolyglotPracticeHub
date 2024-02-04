const cssFemaleStudents = data.find((d) => d.course == "CSS").students.filter((stu) => stu.gender == "female")
// console.log(cssFemaleStudents)


// const totalCssMarks = data.find((d) => d.course == "CSS").students.reduce((total, stu) => total + stu.marks, 0)
// console.log(totalCssMarks)


// const htmlstufil = data.find((d) => d.course == "HTML").students.filter((stu) => stu.age < 22 && stu.gender == "male")
// console.log(htmlstufil)