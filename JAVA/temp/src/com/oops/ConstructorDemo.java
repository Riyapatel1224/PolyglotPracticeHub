package com.oops;
/*
type of constructor
--constructor can have parameter but don't have return type
--single class must have single constructor
--if user does not create constructor than compiler will do it by default

1)default constructor: does not have any parameter 
2)parameter constructor : contains parameter

*/

public class ConstructorDemo {
	
	int amount;
	public ConstructorDemo() {
		System.out.println("default");
	}
	
	public ConstructorDemo(int amount) {
		this.amount = amount;
		System.out.println("parametarized");
	}
	
	public void getData() {
		System.out.println("amount  = "+amount);
	}
	
	public static void main(String[] args) {
		ConstructorDemo b1 = new ConstructorDemo();
		ConstructorDemo b2 = new ConstructorDemo(200);
		ConstructorDemo b3 = new ConstructorDemo();
		b1.amount=100;
		b3.amount=300;
		
		b1.getData();
		b2.getData();
		b3.getData();
	}
}
