
import React from 'react'
import { useParams } from 'react-router-dom'

export const PLayContent = () => {

    //this id we will get from the url and we have declared the variable in App.jsx route
    const id = useParams().id; 
    console.log(useParams())
    //{id:"10002"}
    return (
        <div style={{ textAlign: "center", height: 200, width: "100%", marginTop: "10px", backgroundColor: "violet" }}>
            <h1>PLAYING....{id}</h1>
        </div>
    )
}