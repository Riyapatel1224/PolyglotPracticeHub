package com.oops.abstraction;

interface Run{
	void Runnable();
}

public class PolymorphicObject implements Run{
	public static void main(String[] args) {
		
		Run r1 = new PolymorphicObject();
		r1.Runnable();
//		r1.Runnable2(); cannot call method of child class only parent class method will be called
		PolymorphicObject r2 = new PolymorphicObject();
		r2.Runnable();
		r2.Runnable2();
	}
	
	public void Runnable() {
		System.out.println("Runnable method from child");
	}
	
	public void Runnable2() {
		System.out.println("Runnable2 method from child");
	}
}
