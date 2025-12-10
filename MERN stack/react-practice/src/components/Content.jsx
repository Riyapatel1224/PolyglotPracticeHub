import React from 'react'

export const Content = () => {

    var age = 19;
    var sName = "abc";
    var isActive = true;

    var user = {
        id: 1001,
        name: "xyz",
        age: 30,
    };

  return (
    <div style={{ textAlign: "center", backgroundColor: "lightblue" }}>
          <h1>Content</h1>
          <h1>Name : {sName}</h1>
          <h1>Age : {age}</h1>
          <h3>Active ??? {isActive == true ? "Active" : "Not Active"}</h3>
          
          <h1>{user.id}</h1>
          <h1>{user.name}</h1>
          <h1>{user.age}</h1>
    </div>
  )
}
