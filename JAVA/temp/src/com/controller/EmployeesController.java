package com.controller;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

import com.mysql.cj.jdbc.CallableStatement;
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
	
	public void callProcedure() {
		Connection conn = DBConnection.getDbconnection();
		
		if(conn!= null) {
			try {
				java.sql.CallableStatement stmt = conn.prepareCall("{CALL GetEmployeeById(?)}");
				stmt.setInt(1, 2);
				
				ResultSet rs = stmt.executeQuery();
				
				while(rs.next()) {
					System.out.print(rs.getInt("id"));
					System.out.print("\t"+rs.getString("name"));
					System.out.print("\t"+rs.getString("age"));
					System.out.print("\t"+rs.getInt("marks"));
				
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
//		ec.updateEmployees();
		ec.callProcedure();
	}
}
