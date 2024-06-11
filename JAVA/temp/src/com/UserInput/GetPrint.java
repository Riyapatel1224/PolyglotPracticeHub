package com.UserInput;
import java.util.Scanner;

public class GetPrint {
	Scanner sc = new Scanner(System.in);
	String name;
	public void GetData() {
		System.out.println("Enter a name: ");
		name = sc.nextLine();
	}
	
	public void PutData() {
		System.out.println("name: "+name);
	}
	
	
	public static void main(String args[]) {
		GetPrint obj = new GetPrint();
		obj.GetData();
		obj.PutData();
		
	}
}
