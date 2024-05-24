package com.Methods;

public class NonStaticMethod {
	
	//non-static method without return type without argument
	public void test() {
		//to call non static method we need to make an object but to call nonstatic method inside nonstatic no object is needed
		System.out.println("test");
	}
	
	//non-static method with return type with argument
	public int sum(int a,int b) {
		return a+b;
	}
	
	//non-static method with return type without argument
	public boolean isValid() {
		return false;
	}
	
	public static void main(String args[]) {
		
		//create Object of a class
		NonStaticMethod m1 = new NonStaticMethod();
		m1.test();
		int ans = m1.sum(100,10);
		System.out.println(ans);
		boolean ans1 = m1.isValid();
		System.out.println(ans1);
	}
}
