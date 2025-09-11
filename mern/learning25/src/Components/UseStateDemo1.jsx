import React, { useState } from 'react'

export const UseStateDemo1 = () => {
    // var count = 0;

    const [count, setcount] = useState(0)

    const increaseCount = () => {
        setcount(count+1)
        console.log(count)
    }
  return (
      <div style={{textAlign:'center'}}>
          <h1>UseStateDemo1</h1>
          <h2>Count = {count}</h2>
          <button onClick={()=>{increaseCount()}}>INCREASE</button>
    </div>
  )
}
