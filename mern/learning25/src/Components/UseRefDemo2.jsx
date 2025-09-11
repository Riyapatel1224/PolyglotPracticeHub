import React, { useEffect, useRef } from 'react'

export const UseRefDemo2 = () => {

    const divRef = useRef(null)

    useEffect(() => {
        divRef.current.scrollIntoView({ behavior: "smooth" })
    },[])

  return (
      <div style={{textAlign:'center'}}>
          <h2>UseRefDemo2</h2>

          <div style={{ height: 500, backgroundColor: 'orange', border: '2px solid black' }}></div>
          <div style={{ height: 500, backgroundColor: 'white', border: '2px solid black' }}></div>
          <div style={{ height: 500, backgroundColor: 'green', border: '2px solid black' }} ref={divRef}></div>

    </div>
  )
}
