const convert = (sname) => {


    const checkName = (name) => {

        if (name.length >= 2) {
            return true;
        }
        else {
            return false;
        }

    }

    var flag = checkName(sname);
    console.log(flag);
    if (!flag) {
        return "Invalid Name";

    }
    else {

        return sname.toUpperCase();
    }

}

var result = convert("Riya");
console.log(result); 
