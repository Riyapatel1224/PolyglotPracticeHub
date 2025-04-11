package com.controller;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

import com.utils.DBConnection;

public class StudentController {
	
	//update the table
	//scanner -> user input
	
	public void deleteStudent(int id) {
		Connection conn = DBConnection.getDbconnection();
		
		if(conn!= null) {
			try {
				Statement stmt = conn.createStatement();
				String deleteSQL = "delete from students where id ="+id+"";
				
				int res = stmt.executeUpdate(deleteSQL);
				
				if (res > 0) {
					System.out.println(res + " rows Deleted");
				} else {
					System.out.println(res + " rows Deleted");
				}
				
				
				
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
		
	}
	
	
	
	public void addStudent() {
		
		// connection estabishment 
		Connection conn = DBConnection.getDbconnection();
		
		if(conn!=null) {
			try {
				Statement stmt = conn.createStatement();
				String name = "ajay";
				String insertSQL = "insert into students(name,age,marks)values('amit',23,40)";
				
				//query submit
				// return type int, used with DML and DDL
				int res = stmt.executeUpdate(insertSQL);
				
				//return boolean 
				// DML --> TRUE
				// DDL --> FALSE
//				boolean res1 = stmt.execute(insertSQL);
				
				
				// DDL query 
//				stmt.executeQuery(insertSQL);
				
				if(res > 0) {
					System.out.println(res +" rows inserted");
				}
				else {
					System.out.println(res+"rows inserted");
				}
				
				
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
		
		
	}
	
	public void addMulStudents() {
		Connection conn = DBConnection.getDbconnection();
		Scanner sc = new Scanner(System.in);
		
		String insertSQL = "insert into students(name,age,marks)values(?,?,?)";
		
		try {
			PreparedStatement pstmt = conn.prepareStatement(insertSQL);
			
			while(true) {
				System.out.println("enter data : 1 , exit : 0");
				
				System.out.println("Enter name of the student : ");
				String name = sc.next();
				pstmt.setString(1, name);
				
				System.out.println("Enter age of the student : ");
				int age = sc.nextInt();
				pstmt.setInt(2, age);
				
				System.out.println("Enter marks of the student : ");
				int marks = sc.nextInt();
				pstmt.setInt(3, marks);
				
				pstmt.addBatch();
				
			}
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	public void displayStudents() {
		Connection conn = DBConnection.getDbconnection();
		
		if(conn!= null) {
			String selectSQL = "select * from students";
//			String selectSQL = "select * from students where id=?";
			try {
				PreparedStatement pstmt = conn.prepareStatement(selectSQL);
//				pstmt.setInt(1, id you want to print);
				ResultSet rs = pstmt.executeQuery();
				
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
	
	
	public void callProcedure() {
		Connection conn = DBConnection.getDbconnection();
		
		if(conn!= null) {
			try {
				java.sql.CallableStatement stmt = conn.prepareCall("{CALL GetStudentsByMarks(?,?)}");
				stmt.setInt(1, 90);
				stmt.setInt(2, 95);
				
				ResultSet rs = stmt.executeQuery();
				
				while(rs.next()) {
					System.out.print(rs.getInt("id"));
					System.out.print("\t"+rs.getString("name"));
					System.out.print("\t"+rs.getString("age"));
					System.out.print("\t"+rs.getInt("marks"));
					System.out.println();
				
				}
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
	}
	
	public static void main(String[] args) {
		StudentController sc = new StudentController();
//		sc.addStudent();
//		sc.deleteStudent(1);
//		sc.addMulStudents();
//		sc.displayStudents();
		sc.callProcedure();
	}
}
