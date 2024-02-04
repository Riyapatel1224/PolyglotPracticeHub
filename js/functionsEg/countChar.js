var str = "hi this is india"
var count = 1;

for (let i = 1; i <= str.length; i++)
{
    if (str[i] == " ")
    {
        count++
    }
}
console.log(count)