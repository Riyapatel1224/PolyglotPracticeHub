const { z } = require('zod');

const userValidationSchema = z.object({
    name: z.string().min(3, "Name must be at least 3 characters"),
    email: z.string().email("Invalid email formate"),
    age: z.number().min(18, "Age must be at least 18"),
    role: z.string().min(1, "Role is required")
});

module.exports = userValidationSchema;