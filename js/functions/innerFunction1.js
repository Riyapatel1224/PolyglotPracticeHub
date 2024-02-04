function outer()
{
    console.log("Outer function")
    function inner()
    {
        console.log("Inner function")
    }
    inner();
}
outer();