package com.controller;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

import com.utils.DBConnection;


// preparedStement will execute only once (query compilation)

public class EmployeesController {
	
	
	public void updateEmployees() {
		Scanner sc = new Scanner(System.in);
		Connection conn = DBConnection.getDbconnection();
		if(conn!= null) {
			String updateSQL = "update employees set name=?, email=?,salary=? where id=?";
			try {
				PreparedStatement pstmt = conn.prepareStatement(updateSQL);
				
				System.out.println("Enter updated employee name: ");
				String name = sc.next();
				
				System.out.println("Enter updated employee email: ");
				String email = sc.next();
				
				System.out.println("Enter updated employee salary");
				int salary = sc.nextInt();
				
				System.out.println("Enter updated employee id");
				int id = sc.nextInt();
				
				pstmt.setString(1,name);
				pstmt.setString(2,email);
				pstmt.setInt(3,salary);
				pstmt.setInt(4,id);
				
				
				int res = pstmt.executeUpdate();
				if(res>0) {
					System.out.println(res+" record updated");
				}
				else {
					System.out.println(res+" record updated");
				}
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	public void addEmployees() {
		Scanner sc = new Scanner(System.in);
		
		Connection conn = DBConnection.getDbconnection();
		
		if(conn!= null) {
			
			String insertSQL = "insert into employees(name,email,salary) values(?,?,?)";
			
			try {
				PreparedStatement pstmt = conn.prepareStatement(insertSQL);
				
				System.out.println("Enter employee name: ");
				String name = sc.next();
				
				System.out.println("Enter employee email: ");
				String email = sc.next();
				
				System.out.println("Enter employee salary");
				int salary = sc.nextInt();
				
				pstmt.setString(1,name);
				pstmt.setString(2,email);
				pstmt.setInt(3,salary);
				
				int res = pstmt.executeUpdate();
				if(res>0) {
					System.out.println(res+" record inserted");
				}
				else {
					System.out.println(res+" record inserted");
				}
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	public static void main(String[] args) {
		EmployeesController ec = new EmployeesController();
//		ec.addEmployees();
		ec.updateEmployees();
	}
}
