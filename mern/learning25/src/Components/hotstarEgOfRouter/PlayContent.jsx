import React from 'react'
import { useParams } from 'react-router-dom'

export const PlayContent = () => {
    const id = useParams().id;
  return (
      <div style={{ textAlign: "center", height: 200, width: "100%", marginTop: "10px", backgroundColor: "violet" }}>
          <h1>PLAYING={id}</h1>
      </div>
  )
}
