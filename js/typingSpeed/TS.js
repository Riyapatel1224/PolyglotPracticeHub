var correctCount = 0;
var start,end;

function highlightWord() {

    var sentence = document.getElementById("sentence").textContent;
    var textmark = document.getElementById("textMark").value.toUpperCase();
    var result = document.getElementById("time");
    var highlightedSentence = "";

    
    for (var i = 0; i < sentence.length; i++) {
        if (sentence[i] == textmark[i]) {
            highlightedSentence += '<span class="highlight">' + sentence[i] + '</span>';
            correctCount++;

        }
        else {
            highlightedSentence = highlightedSentence + sentence[i];
        }
    }
    console.log(correctCount);


    var sentence = document.getElementById("sentence");
    sentence.innerHTML = highlightedSentence;



   
} 

function time()
{
    if (correctCount == 0) {
        var start = new Date().getTime();
        console.log(start);
    }

    if (correctCount == sentence.length) {
        end = new Date().getTime();
        console.log(end);
        var time = (end - start) / 1000;
        console.log("Time taken:", time, "seconds");
        var result = document.getElementById("result");
        result.innerHTML = "You have completed the task in " + time + " seconds";
    }

}

