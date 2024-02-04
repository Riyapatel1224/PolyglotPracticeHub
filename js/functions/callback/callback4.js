function whatsapp(choice)
{
    console.log("choice")

}
function call(choice)
{
    console.log("call")
}
function sms(choice)
{
    console.log("sms")
}

function mobile(cb,choice)
{
    var x=cb(choice)
}


var choice = 1;
if (choice == 1)
{
    mobile(whatsapp)
}
else if (choice == 2)
{
    mobile(call)

}
else if(choice ==3)
{
    mobile(sms)


}