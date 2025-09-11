import React, { useEffect, useRef, useState } from 'react'

export const UseRefDemo3 = () => {

    const renderCount = useRef(0)
    const [count, setCount] = useState(0)

    useEffect(() => {
        renderCount.current = renderCount.current + 1
    },[])

  return (
      <div style={{textAlign:'center'}}>
          <h2>UseRefDemo3</h2>

          <p>Render COunt: {renderCount} times</p>
          <button onClick={() => setCount(count + 1)}>Increase</button>

    </div>
  )
}
