const Location = document.getElementById("location")

const WeatherUpdate = async (location) => {
    const url = `https://api.openweathermap.org/data/2.5/weather?q=${location}&appid=fe4feefa8543e06d4f3c66d92c61b69c`
    const res = await fetch(url, {
        method: "GET"
    })

    const data = await res.json()
    console.log(data)
    const weatherCity = document.getElementById("weatherCity")
    weatherCity.innerHTML = data.name
    const weatherDatetime = document.getElementById("weatherDatetime")
    // weatherDatetime.innerHTML= data.
    const weatherT = document.getElementById("weatherT")
    weatherT.innerHTML = ((data.main.temp - 273.15).toFixed(2))+ '°C'
    const min = document.getElementById("min")
    const max = document.getElementById("max")
    min.innerHTML  = Math.round(data.main.temp_min - 273.15) + '°C'
    max.innerHTML  = Math.round(data.main.temp_max -  273.15) + '°C'
    const feelsLike = document.getElementById("feelsLike")
    feelsLike.innerHTML =  (Math.round((data.main.feels_like - 273.15)*10)/10)+ '°C'


}

const submithandler = (e) => {
    e.preventDefault()
    const Location = document.getElementById("location")
    const WeatherCity = document.getElementById("weatherCity")
    WeatherUpdate(Location.value);


}