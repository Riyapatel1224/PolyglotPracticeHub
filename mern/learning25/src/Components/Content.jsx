import React from 'react'

export default function Content() {

var id = 21;
    var name = "ram"
    var isActive = true
    var user = {
    id: 1001,
    name : "abc"
  }

    return (
    <div>Content
        <h1>hello</h1>
        <h2>{id}</h2>
        <h3>{ name}</h3>
        <h3>isActive {isActive == true ? "Active" : "InActive"}</h3>
        <h4>{user.id}</h4>
    </div>
        
  )
}

