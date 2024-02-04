var data = "riya"
var capital = ""

for (let i = 0; i < data.length; i++)
{
    if (data.codePointAt(i) >= 97 && data.codePointAt(i) <= 122)
    {
        capital = capital.concat(String.fromCharCode(data.codePointAt(i)-32)) 
    }
}
console.log(capital);