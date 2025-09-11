// import React from 'react';
// import { useFieldArray, useForm } from 'react-hook-form';
// import { useFormAction } from 'react-router-dom';

// export const Form = () => {

//     const { register, handleSubmit, control } = useForm({
//         defaultValues: {
//             tickets: [{ name: "", gender: "", age: "", frequency: 0 }]
//         }
//     })

//     const submitHandler = (data) => {
//         console.log(data)
//     }

//     const { field, append, remove } = useFieldArray({
//         control,
//         name:"tickets"
//     })
        
//     return (
//         <div className="container my-5">
//             <div className="p-4 shadow rounded bg-light">
//                 <h1 className="mb-4">Enter Details</h1>

//                 <form onSubmit={handleSubmit(submitHandler)}>
//                     <div className="mb-3">
//                         <label className="form-label">Trip Type:</label><br />
//                         <div className="form-check form-check-inline">
//                             <input className="form-check-input" type="radio" name="tripType" id="oneWay" defaultChecked />
//                             <label className="form-check-label" htmlFor="oneWay">One Way</label>
//                         </div>
//                         <div className="form-check form-check-inline">
//                             <input className="form-check-input" type="radio" name="tripType" id="roundTrip" />
//                             <label className="form-check-label" htmlFor="roundTrip">Round Trip</label>
//                         </div>
//                     </div>

//                     <div className="row mb-3">
//                         <div className="col-md-6">
//                             <label htmlFor="from" className="form-label">From :</label>
//                             <select className="form-select" id="from" required>
//                                 <option value="">Select City</option>
//                                 <option>Delhi</option>
//                                 <option>Mumbai</option>
//                                 <option>Bengaluru</option>
//                                 <option>Chennai</option>
//                                 <option>Kolkata</option>
//                             </select>
//                         </div>
//                         <div className="col-md-6">
//                             <label htmlFor="to" className="form-label">To :  </label>
//                             <select className="form-select" id="to" required>
//                                 <option value="">Select City</option>
//                                 <option>Delhi</option>
//                                 <option>Mumbai</option>
//                                 <option>Bengaluru</option>
//                                 <option>Chennai</option>
//                                 <option>Kolkata</option>
//                             </select>
//                         </div>
//                     </div>

//                     <div className="row mb-3">
//                         <div className="col-md-6">
//                             <label htmlFor="departure" className="form-label">Departure Date</label>
//                             <input type="date" className="form-control" id="departure" required />
//                         </div>
//                         <div className="col-md-6">
//                             <label htmlFor="travellers" className="form-label">Travellers</label>
//                             <input type="number" className="form-control" id="travellers" min="1" defaultValue="1" required />
//                         </div>
//                     </div>
                    
//                     {fields.map((filed, index) => (
//                         return <div>
//                         <div>
                                
//                         </div>
//                         </div>
//                     ))}

//                     <div className="text-center">
//                         <button type="submit" className="btn btn-primary px-5 py-2 rounded-pill fw-bold">Add Passengers</button>
//                     </div>

                    
//                 </form>

                
               
//             </div>

//         </div>
//     );
// };
