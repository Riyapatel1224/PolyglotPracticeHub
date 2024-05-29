package com.UserInput;

import java.util.Scanner;

public class IP {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
//		sc --> object of scanner class
//		InputStream class : system.out.println
//		java.io.InputStream

		System.out.println("Enter a name: ");
//		cannot use sc.next because it will not print string with blankspaces
//		String name = sc.next();
		String name = sc.nextLine();
		System.out.println("name: " + name);

		System.out.println("Enter a int : ");
		int i = sc.nextInt();
		System.out.println("int :" + i);

		System.out.println("Enter a float: ");
		float f = sc.nextFloat();
		System.out.println("Float: " + f);

		sc.close();

	}
}
