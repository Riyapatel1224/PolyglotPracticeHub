const addUser = async (user) => {
    const loading = document.getElementById("loading");
    loading.innerHTML = "Loading...."

    const res = await fetch("https://node5.onrender.com/user/user", {
        method: "POST",
        body: JSON.stringify(user),
        headers: {
            "Content-Type":"application/json"
        }
    })
    loading.innerHTML = ""
}

const submitHandler = (e) => {
    e.preventDefault();

    const name = document.getElementById("name").value;
    const age = document.getElementById("age").value;
    const email = document.getElementById("email").value;
    const isactive = document.getElementById("status").checked

    const user = {
        name: name,
        age:age,
        email:email,
        isActive:isactive
    }
    addUser(user);
}