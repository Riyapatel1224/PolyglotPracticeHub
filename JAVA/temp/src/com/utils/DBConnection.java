package com.utils;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBConnection {

	private static String connectionURL = "jdbc:mysql://localhost:3306/javaPractice";
	private static String userName = "root";
	private static String password = "";
	private static String driverClass = "com.mysql.cj.jdbc.Driver";
	
	public static void getDbconnection(){
		try {
			Class.forName(driverClass);
			
			try {
				Connection conn = DriverManager.getConnection(connectionURL,userName,password);
				
				if(conn!= null) {
					System.out.println("Connected to database");
				}
				else {
					System.out.println("not connected to database");
				}
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
			
			
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) {
		
		getDbconnection();
	}
}
