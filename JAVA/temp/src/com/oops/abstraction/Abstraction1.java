package com.oops.abstraction;

public abstract class Abstraction1 {
	
	//abstract method cannot create body
	public abstract void phone();
	
	public void nonAbs() {
		System.out.println("non abstract class");
	}
	
	public static void main(String[] args) {
		
		//abstract class object can not be created 
		
//		Abstraction1 obj1 = new Abstraction1();
	}
}
