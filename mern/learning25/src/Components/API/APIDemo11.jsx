import React, { useEffect, useState } from 'react'
import axios from 'axios'
import { toast } from 'react-toastify'
import { useFetchData } from '../../hooks/APIhook'

export const APIDemo11 = () => {

    const { data, isLoading } = useFetchData("https://node5.onrender.com/user/user");

    const deleteUser = async (id) => {
        const res = await axios.delete("https://node5.onrender.com/user/user/" + id);
        console.log(res)
        if (res.status == 204) {
            toast.success("user deleted...")
            getAPIcall()
        }
    }

    return (
        <div style={{ textAlign: 'center' }}>
            <h1>API Demo 1</h1>
            <table className='table'>

                <thead>

                    <tr>
                        <th>ID</th>
                        <th>NAME</th>
                        <th>AGE</th>
                        <th>isActive</th>
                        <th>Password</th>
                        <th>Action</th>
                    </tr>


                </thead>

                <tbody>
                    {
                        data.data?.map((user) => {
                            return <tr>
                                <td>{user._id}</td>
                                <td>{user.name}</td>
                                <td>{user.age}</td>
                                <td>{user.isActive == true ? "Active" : "Not Active"}</td>
                                <td>{user.password ? user.password : "N/A"}</td>
                                <button onClick={() => { deleteUser(user._id) }}>DELETE</button>
                            </tr>

                        })
                    }
                </tbody>
            </table>


        </div>
    )
}

