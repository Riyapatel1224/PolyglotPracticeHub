import React, { useState } from 'react'

export const UseStateAddArray = () => {

    const [fruits, setfruits] = useState(['apple', 'mango', 'banana'])
    const addFruit = () => {
        setfruits([...fruits, 'orange'])
    }

    return (
        <div style={{ textAlign: 'center' }}>
            <h1>UseStateAddArray</h1>
            {
                fruits.map((f) => {
                    return <li>{f}</li>
                })

            }
            <button onClick={() => { addFruit() }}>Add Fruits</button>
        </div>
    )
}
