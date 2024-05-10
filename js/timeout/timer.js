let sec = 0;
let hour = 0;
let min = 0;

let timer = false;

function Start() {
    timer = true;
    myfun();

}

function Stop() {
    timer = false;
    myfun();
}

function Reset() {
    timer = false;
    sec = 0;
    hour = 0;
    min = 0;

}

function myfun() {

    if (timer === true) {
        sec = sec + 1;
    }
    if (sec == 60) {
        min = min + 1;
        sec = 0;
    }
    if (min == 60) {
        hour = hour + 1;
        min = 0;
    }

    document.getElementById("sec").innerHTML = sec;
    document.getElementById("min").innerHTML = min;
    document.getElementById("hr").innerHTML = hour;
    setTimeout("myfun()", 10);


}