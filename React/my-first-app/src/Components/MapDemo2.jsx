import React from 'react'

export const MapDemo2 = () => {

    var userData = [
        { name: "ram", age: 23, salary: 20000, gender: "male" },
        { name: "seeta", age: 23, salary: 21000, gender: "female" },
        { name: "lakshman", age: 20, salary: 22000, gender: "male" }
    ]

  return (
      <div style={{textAlign:'center'}}>
          <h1>MapDemo2</h1>
          <table className="table table-dark table-striped">
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
                          return <tr>
                              <td>{user.name}</td>
                              <td>{user.age}</td>
                              <td>{user.salary}</td>
                              <td>{user.gender}</td>
                          </tr>
                      })
                  }
              </tbody>
            </table>
    </div>
  )
}
