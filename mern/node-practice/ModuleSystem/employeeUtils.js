const empName = "Bob";
const empSalary = 50000;

const calculateBonus = (salary) => { 
    return salary * 0.1;
};

module.exports = { empName, empSalary, calculateBonus };