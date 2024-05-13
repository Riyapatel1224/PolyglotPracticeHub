const text = document.getElementById("text").innerHTML;
console.log(text);
const textArray = text.split('');
console.log(textArray);

var startTime;
var endTime;
var count = 0;

const showText = () => {
    if (count == 0)
    {
        startTime = performance.now();  
        console.log(startTime);
    }
    count++;

    var input = document.getElementById("input").value;
    var inputArray = input.split('');

    for (let i = 0; i < inputArray.length; i++)
    {
        if (inputArray[i] == textArray[i])
        {
            document.getElementById('text').innerHTML = '<span style="color:green;">' + textArray.slice(0, i + 1).join('') + '</span>' + textArray.slice(i + 1).join('');

        }
    }
}

const end = () => {
    var time = document.getElementById("time");
    var endTime = performance.now();

    var difference = (endTime - startTime) / 1000;
    time.innerHTML = (difference+ "sec");
}

