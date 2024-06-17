//child class will have same method as parent class
//it will have same name same parameter same return type 
// access modifiers can be changed from top to bottom, the bottom ones can be replaced in chind class

//privete (cannot be overriden)
//			^
//default 	|   
//protected	|
//public	|

//final class cannot be override
//static class can be override

package com.oops.polymorphism;

class TRAI{
	
	public void call() {
		System.out.println("call method of TRAI class");
	}
	
	//cannot be overriden
	private void mms() {
		System.out.println("mms method of TRAI class");
	}
	
	void task() {
		System.out.println("task method of TRAI class");
	}
	
	public int reach() {
		System.out.println("reach method of TRAI class");
		return 0;
	}
	
//	public final void greet() {
//		System.out.println("final greet method of TRAI class");
//	}
	
	public static void map() {
		System.out.println("map method of TRAI class");
	}
}

class JIO extends TRAI{
	
	
	public void call() {
		System.out.println("call method of jio class");
	}
	
	//not overriden
	private void mms() {
		System.out.println("call method of jio class");
	}
	
	public void task() {
		System.out.println("task method of jio class");
	}
	
	public int reach() {
		System.out.println("call method of jio class");
		return 0;
	}
	
//	public void greet() {
//		System.out.println("reach method of jio class");
//	}
	
	public static void map() {
		System.out.println("map method of jio class");
	}
	
	
}


public class Overridding {

}
