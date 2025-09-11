import React from 'react'

export const UseForm4 = () => {

  const { register, handleSubmit, formState: { errors } } = useForm({ mode: "onBlur" })
  const SubmitHandler = (data) => {
    console.log(data)
  }
  var refcode = ['abc', 'xyz', 'pqr']
  
  const validationSchema = {

    refCodeValidator: {
      required: {
        value: true,
        message: 'refferal not valid'
      },
      pattern: {
        value: /[6-9]{1}[0-9]{9}/,
        message: 'enter valid phone number'
      }
    }
  }
  return (
    <div style={{ textAlign: 'center' }}>
      <form onSubmit={handleSubmit(SubmitHandler)}>
        <div>
          <h1>Validation Form</h1>
          <input type="text" {...register("refcode", validationSchema.refCodeValidator)} />
          {
            errors.refcode?.message
          }
        </div>
        <div>

        </div>
      </form>
      
    </div>

  
  )
}
