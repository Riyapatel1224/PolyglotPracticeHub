package com.oops.abstraction;

public class Abstraction2 extends Abstraction1{
	public void phone() {
		System.out.println("phone method of abstract2");
	}
	
	public static void main(String[] args) {
		Abstraction2 obj = new Abstraction2();
		obj.phone();
		obj.nonAbs();
	}
}
