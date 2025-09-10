import React from 'react'

export const Content = () => {

    var age = 20;
    var Name = "Ram";
    var isActive = false;

    var user = {
        id: 1001,
        name: "Sita",
        age: 21
    };

  return (
      <div style={{textAlign:'center',backgroundColor:'lightblue'}}>
          <h1>Content</h1>
          <h2>Name : {Name}</h2>
          <h3>Age : {age}</h3>
          <h4>Active?? {isActive == true ? "Active" : "Not Active"}</h4>
          {user.id} <br />
          {user.age} <br />
          {user.name} <br />
    </div>
  )
}
