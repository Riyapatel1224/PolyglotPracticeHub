import React from 'react'

export const Map1 = () => {

    var userAge = 18

    var userData = [
        { name: "ram", age: 23, salary: 20000, gender: "male" },
        { name: "parth", age: 26, salary: 50000, gender: "male" },
        { name: "seeta", age: 22, salary: 22000, gender: "female" },
        { name: "jay", age: 30, salary: 75000, gender: "male" },
    ]

  return (
      <div style={{textAlign:"center"}}>
          
          <h1>Map demo 1</h1>
          <h2 style={{ color: userAge >= 18 ? "green" : "red" }} >Age = {userAge}</h2>

          {
              userData.map((user) => {
                  return <ul>
                      <li>{user.name} - { user.age}</li>
                  </ul>
              })
          }

    </div>
  )
}
