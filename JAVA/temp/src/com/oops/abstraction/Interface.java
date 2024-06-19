package com.oops.abstraction;

//interface is same as class
//all methods are public abstract
//fully abstract class

interface Clonable{
	
//	all interface variable are public final static
//	public final static int x = 10;
	int x = 10;
	void cloud();
}



public class Interface implements Clonable{
	
	public static void main(String[] args) {
		
	}
	
	
	public void cloud() {};
	
}
