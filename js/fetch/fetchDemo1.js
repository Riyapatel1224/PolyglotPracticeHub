const getApiDemo = async() => {
    const res = await fetch("https://reqres.in/api/users?page=2", {
        method: "GET",
    })

    const data = await res.json()
    console.log("Data: ", data)
    console.log("Data: ", data.data)//passes array 
    console.log(data.page)
}

const getApiDemo2 = async () => {
    const res = await fetch("https://dummyjson.com/products", {
        method:"GET",
    })

    const data = await res.json()
    console.log("data: ",data)
}

// getApiDemo()
getApiDemo2()