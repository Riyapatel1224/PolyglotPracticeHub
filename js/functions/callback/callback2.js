function science(name) {
    console.log("I am science student", name);
}

function commerce(name) {
    console.log("I am commerce student", name);
}
function arts(name) {
    console.log("I am arts student", name);
}

function admission(cb, stuName) {
    cb(stuName);
}

var per = 90;
if (per >= 80) {
    admission(science, "abc");
} else if (per >= 60) {
    admission(commerce, "xyz");
} else {
    admission(arts, "pqr");
}
