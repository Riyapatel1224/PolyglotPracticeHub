import React from 'react'

export const MapDemo1 = () => {
  var userAge = 17;
  var userData = [
    { name: "ram", age: 23, salary: 20000, gender: "male" },
    { name: "seeta", age: 23, salary: 21000, gender: "female" },
    { name: "lakshman", age: 20, salary: 22000, gender: "male" }
  ]
  return (
    <div>
      <h1>Map Demo 1</h1>
      <h1 style={{color:userAge>=18?"green":"red"}}>
        Age : {userAge}
      </h1>
      {
        userData.map((user) => {
          return <ul>
            <li>{user.name} -- {user.age} -- {user.gender} -- { user.salary}</li>
          </ul>
        })
      }
    </div>
  )
}
