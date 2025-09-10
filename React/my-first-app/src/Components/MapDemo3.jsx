import React from 'react'

export const MapDemo3 = () => {

    var userData = [
        { name: "ram", age: 23, salary: 20000, gender: "male" },
        { name: "seeta", age: 23, salary: 21000, gender: "female" },
        { name: "lakshman", age: 20, salary: 22000, gender: "male" },
        { name: "Ravaan", age: 25, salary: 23000, gender: "male" }
    ]

  return (
      <div style={{textAlign:'center'}}>
          <h1>MapDemo3</h1>

          <table className="table table-dark table-striped table-bordered align-middle text-center">
              <thead>
                  <tr>
                      <th>NAME</th>
                      <th>AGE</th>
                      <th>SALARY</th>
                      <th>GENDER</th>
                  </tr>
              </thead>
              <tbody>
                  {
                      userData.map((user) => {
                          return <tr style={{backgroundColor:user.gender == "female" && "pink"}}>
                              <td style={{ color: user.name.startsWith("s") && "blue" }}>{user.name}</td>
                              <td>{user.age}</td>
                              <td style={{ color: user.salary > 21000 && "yellow" }}>{user.salary}</td>
                              <td>{ user.gender}</td>
                          </tr>
                      })
                  }
              </tbody>
          </table>
    </div>
  )
}
