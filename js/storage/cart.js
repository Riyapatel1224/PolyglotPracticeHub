

var products = [
    {
        id: 1,
        name: "Laptop",
        price: 45000,
        description: "New Mac pro",
    },
    {
        id: 2,
        name: "Mobile",
        price: 15000,
        description: "New 4G Mobile",
    }

]

const loadProducts = () => {
    const productContainer = document.getElementById("productContainer")

    for (let i = 0;i<products.length;i++) { 
        const prodDiv = document.createElement("div")
        prodDiv.className = "product"
        const prodcutInfoDiv = document.createElement("div")
        prodcutInfoDiv.className = "product-info"

        const title = document.createElement("h2")
        title.innerHTML = products[i].name
        title.className = "product-title"

        const price = document.createElement("p")
        price.innerHTML = "Price: " + products[i].price
        price.className = "product-price"

        const description = document.createElement("p")
        description.innerHTML = "Description: " + products[i].description
        description.className = "product-description"


        const button = document.createElement("button")
        button.innerHTML = "Add to Cart"
        button.className = "btn btn-primary"


        button.addEventListener("click", () => {

            localStorage.setItem("cart", JSON.stringify(products[i]))
            alert("product added to cart ->" + products[i].name)
        })


        prodcutInfoDiv.appendChild(title)
        prodcutInfoDiv.appendChild(price)
        prodcutInfoDiv.appendChild(description)
        prodcutInfoDiv.appendChild(button)
        prodDiv.appendChild(prodcutInfoDiv)
        productContainer.appendChild(prodDiv)    
    }
}