// const express = require('express');

// // app is a server, use it to define routes
// const app = express();
// app.use(express.json());    // This tells Express: "If a request has JSON data, parse it"

// app.get('/', (req, res) => {
//     res.send('Server is running');
// });

// // get a specific user by id
// app.get('/api/users/:id', (req, res) => {
//     const userId = req.params.id;
//     res.json({
//         message: `Getting user ${userId}`
//     });

// });

// // Get all users
// app.get('/api/users', (req, res) => {
//     const users = [
//         { id: 1, name: 'Alice', email: 'alice@example.com' },
//         { id: 2, name: 'Bob', email: 'bob@example.com' },
//         { id: 3, name: 'Charlie', email: 'charlie@example.com' }
//     ];

//     res.json({
//         success: true,
//         message: 'Retrieved all users',
//         data: users
//     });
// });

// // Creating new user
// app.post('/api/users', (req, res) => {
//     const { name, email } = req.body;
//     console.log('New user received:', { name, email });

//     // 201 means created 
//     res.status(201).json({
//         success: true,
//         message: 'User created successfully',
//         data: { name, email }
//     });
// });


// // Update a user (PUT)
// app.put('/api/users/:id', (req, res) => {
//     const userId = req.params.id;
//     const { name, email } = req.body;

//     console.log(`Updating user ${userId}`, { name, email });

//     res.json({
//         success: true,
//         message: `User ${userId} updated`,
//         data: { id: userId, name, email }
//     });
// });


// // Delete a User 
// app.delete('/api/users/:id', (req, res) => {
//     const userId = req.params.id;
//     console.log(`Deleting user ${userId}`);

//     res.json({
//         success: true,
//         message: `User ${userId} deleted`
//     });
// });

// // Error handling
// app.use((req, res) => {
//     res.status(404).json({
//         success: false,
//         message: `Route ${req.method} ${req.path} not found`
//     });
// });

// // SETTING THE SERVER
// const PORT = 3000;

// app.listen(PORT, () => {
//     console.log(`Server running at http://localhost:${PORT}`);
//     console.log(`\n Available Routes:`);
//     console.log(`  GET    http://localhost:${PORT}/`);
//     console.log(`  GET    http://localhost:${PORT}/api/users`);
//     console.log(`  GET    http://localhost:${PORT}/api/users/:id`);
//     console.log(`  POST   http://localhost:${PORT}/api/users`);
//     console.log(`  PUT    http://localhost:${PORT}/api/users/:id`);
//     console.log(`  DELETE http://localhost:${PORT}/api/users/:id`);
// })