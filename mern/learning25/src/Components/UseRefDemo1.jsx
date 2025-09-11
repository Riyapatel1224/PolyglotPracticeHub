import React, { useEffect, useRef } from 'react'

export const UseRefDemo1 = () => {

    const inputRef = useRef(null)

    useEffect(() => {
        inputRef.current.focus()
    },[])

  return (
      <div style={{textAlign:'center'}}>
          <h2>UseRefDemo1</h2>

          <div>
              <label htmlFor="">NAME</label>
              <input type="text"  ref={inputRef}/>
          </div>
          <div>
              <label htmlFor="">AGE</label>
              <input type="text" />
          </div>
    </div>
  )
}
