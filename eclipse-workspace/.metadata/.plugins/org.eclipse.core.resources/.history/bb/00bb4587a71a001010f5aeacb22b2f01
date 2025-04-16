<%@page import="java.time.LocalDate"%>
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Expense Tracker</title>
    <!-- Bootstrap CSS CDN -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>

<%
    // Get today's date in yyyy-MM-dd format
    String today = LocalDate.now().toString();
%>


<div class="container mt-5">
    <div class="card shadow-lg p-4">
        <h2 class="text-center mb-4">Expense Tracker</h2>
        <form action="AddExpenseServelet" method="post">
            <div class="mb-3">
                <label for="expenseDate" class="form-label">Expense Date</label>
                <input type="date" class="form-control" id="expenseDate" name="expenseDate" value="<%= today %>" required>
            </div>

            <div class="mb-3">
                <label for="category" class="form-label">Expense Category</label>
                <select class="form-select" id="category" name="category" required>
                    <option value="">Select Category</option>
                    <option value="Food">Food</option>
                    <option value="Travel">Travel</option>
                    <option value="Utilities">Utilities</option>
                    <option value="Shopping">Shopping</option>
                    <option value="Other">Other</option>
                </select>
            </div>

            <div class="mb-3">
                <label for="amount" class="form-label">Amount</label>
                <input type="number" step="0.01" class="form-control" id="amount" name="amount" placeholder="Enter amount" required>
            </div>

            <div class="mb-3">
                <label for="vendor" class="form-label">Vendor Name</label>
                <input type="text" class="form-control" id="vendor" name="vendor" placeholder="Enter vendor name" required>
            </div>

            <div class="d-grid">
                <button type="submit" class="btn btn-primary">Add Expense</button>
            </div>
        </form>
    </div>
</div>

<!-- Bootstrap JS Bundle CDN -->
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>
