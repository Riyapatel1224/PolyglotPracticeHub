function calc(x, y)
{
    function add(a, b)
    {
        return a + b;
    }
    return add(x,y);
}


var ans = calc(10, 20);
console.log(ans)

