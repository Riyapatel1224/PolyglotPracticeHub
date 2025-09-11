import axios from 'axios'
import React, { useState } from 'react'

export const APIPost = () => {
    const [name, setName] = useState("");
    const [gender, setGender] = useState("");
    const [email, setEmail] = useState("");
    const [isActive, setIsActive] = useState("");

    const userObj = {
        name,
        gender,
        email,
        status: isActive
    }
    const Postuser = async () => {
        const res = await axios.post("https://gorest.co.in/public/v2/users", userObj, {
            headers: {
                "Authorization": "Bearer 87a6e693c6ad5316132fb9df78c80553c9fe17fbee4945d3704e2b55fd94c2b5"
            }

        }

        )
        console.log(res.status)
    }
    return (
        <div>
            <h1>Apidemo6</h1>
            <div>
                <label>Name</label><br />
                <input type="text" value={name} onChange={(e) => setName(e.target.value)} />
            </div>

            <div>
                <label>Gender</label><br />
                <input type="text" value={gender} onChange={(e) => setGender(e.target.value)} />
            </div>

            <div>
                <label>Email</label><br />
                <input type="text" value={email} onChange={(e) => setEmail(e.target.value)} />
            </div>

            <div>
                <label>isActive (true/false)</label><br />
                <input type="text" value={isActive} onChange={(e) => setIsActive(e.target.value)} />
            </div>



            <button onClick={() => { Postuser() }} className='btn btn-info'>ADD</button>

        </div>
    )
}