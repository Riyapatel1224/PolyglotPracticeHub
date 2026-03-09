// const nodemailer = require("nodemailer");


// //transporter object is responsible for connecting to the email service ()
// const transporter = nodemailer.createTransport({

//     // tells nodemailer which email provider we are using
//     service: "gmail",

//     // Authentication information require to login to gmail
//     auth: {
//         user: process.env.EMAIL_USER,
//         pass: process.env.EMAIL_PASS
//     }
// });

// // created a reusable function to send emails
// const sendEmail = async (to, subject, text) => {

//     // contains all the info about the email
//     const mailOptions = {
//         from: process.env.EMAIL_USER,
//         to: to,
//         subject: subject,
//         text: text
//     };


//     // transporter.sendMail() actually sends the email
//     // It returns a promise, so we return it to the caller 
//     return transporter.sendMail(mailOptions);
// };

// module.export = sendEmail;