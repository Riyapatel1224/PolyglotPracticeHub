const userName = 'Alice';
const userAge = 28;

const greetUser = (name) => {
    return `Hello, ${name}`;
};

const validateAge = (age) => { 
    return age >= 18 ? "Adult" : "Minor";
};

module.exports = { userName, userAge, greetUser, validateAge };