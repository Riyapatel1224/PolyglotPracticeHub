import React, { useState } from 'react'

export const InputDemo1 = () => {
    const [name, setname] = useState("")
    const [age, setage] = useState()
    const [isSubbmited, setisSubmmited] = useState(false)
    const [color, setcolor] = useState("")
    const [date, setdate] = useState()

    const today = new Date();
    const yesterday = new Date() - 1;
    const tomorrow = new Date() + 1;

    const getDateLabel = (date) => {
        if (date === tomorrow) return "(Tomorrow)";
        if (date === today) return "(Today)";
        if (date === yesterday) return "(Yesterday)";
    };

    const nameHandler = (event) => {
        // console.log(event.target.value)
        setname(event.target.value)
    }

    const submitHandler = () => {
        // alert(`name = ${name} age=${age}`)
        setisSubmmited(true)
    }

    return (
        <div style={{ textAlign: "center" }}>
            <h1>InputDemo1</h1>
            <div>
                <label>NAME</label>
                <input type='text' onChange={(event) => { nameHandler(event) }}></input>

            </div>
            <div>
                <label>AGE</label>
                <input type='text' onChange={(event) => { setage(event.target.value) }}></input>

            </div>

            <div>
                <label>Date</label>
                <input type="date" onChange={(event) => { setdate(event.target.value) }} />
            </div>

            <div>
                <label>Color</label>
                <input type="color" onChange={(event) => { setcolor(event.target.value) }} />
            </div>

            <div>
                <button onClick={() => { submitHandler() }}>ADD</button>
            </div>


            {
                isSubbmited == true && <div style={{ color: color }}>
                    <h1>OUTPUT</h1>
                    <h2>NAME = {name}</h2>
                    <h2>AGE ={age}</h2>
                    <h2>
                        DATE = {date} {getDateLabel()}
                    </h2>
                </div>
            }

        </div>
    )
}
