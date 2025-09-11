import React from 'react'
import { useState } from 'react'

export const UseStateDemo2Loader = () => {

    const [Load, setLoad] = useState(true)

    const StopLoad = () => {
        setLoad(false)
    }

    setTimeout(() => {
        setLoad(false)
    }, 3000);

    return (
        <div style={{ textAlign: 'center' }}>
            <h1>UseStateDemo2Loader</h1>
            {
                Load == true && <h2>LOADING...</h2>
            }

        </div>
    )
}
