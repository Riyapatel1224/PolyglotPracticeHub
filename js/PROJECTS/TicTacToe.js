let boxes = document.querySelectorAll(".box");
let resetbtn = document.querySelector("#reset-btn");
let newGameBtn = document.querySelector("#new-btn");
let msgContainer = document.querySelector(".msg-container");
let msg = document.querySelector("#msg");


let turnO = true;

const winPatterns = [
    [0, 1, 2],
    [0, 3, 6],
    [0, 4, 8],
    [1, 4, 7],
    [2, 5, 8],
    [2, 4, 6],
    [3, 4, 5],
    [6, 7, 8]
];

boxes.forEach((box) => {
    box.addEventListener("click", () => {
        if (turnO) {
            box.innerHTML = "O";
            turnO = false;
        }
        else {
            box.innerHTML = "X";
            turnO = true;
        }
        box.disabled = true; //means?
        checkWinner();
    })
})

const resetGame = () => {
    turnO = true;
    enablesBox();
    msgContainer.classList.add("hide");
}

const disabledBox = () => {
    
    for (let box of boxes)
    {
        box.disabled = true;
        }
}

const enablesBox = () => {

    for (let box of boxes) {
        box.disabled = false;
        box.innerHTML = "";
    }
}


const showWinner = (winner) => {
    msg.innerHTML = `Congratulations, Winner is ${winner}`;
    msgContainer.classList.remove("hide");
    disabledBox();
}

const checkWinner = () => {
    for (let patterns of winPatterns) {
        console.log(boxes[patterns[0]].innerHTML, boxes[patterns[1]].innerHTML, boxes[patterns[2]].innerHTML);
    
        let pos1 = boxes[patterns[0]].innerHTML;
        let pos2 = boxes[patterns[1]].innerHTML;
        let pos3 = boxes[patterns[2]].innerHTML;

        if ((pos1 && pos2 && pos3) != "") {
            if (pos1 === pos2 && pos2 === pos3) {
                console.log("Winner");
                showWinner(pos1);
            }
        }
    }
}

newGameBtn.addEventListener("click", resetGame);
resetbtn.addEventListener("click", resetGame);