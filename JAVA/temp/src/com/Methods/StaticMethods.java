package com.Methods;

public class StaticMethods {
	
	public void test() {
		System.out.println("test");
	}
	
	public static boolean isValid() {
		
		
		//but to call non-static method inside static method we need to create object of the class
		StaticMethods m1 = new StaticMethods();
		m1.test();
		return true;
	}
	
	public static int sum(int a,int b) {
		
		//can call static method inside static method
		isValid();
		return a+b;
	}
	
	public static void main(String args[]) {
		int ans = sum(10,20);
		System.out.println(ans);
		
		boolean ans1 = isValid();
		System.out.println(ans1);
	}
}
