package com.oops.abstraction;

//default and static interface class methods is not compulsarily implement in child class


interface Bottle{
	default void demo() {
		System.out.println("Bottol class method demo");
	}
	
	static void demo1() {
		System.out.println("Bottol class method demo1");
	}
}


public class InterfaceWithBody implements Bottle{
	public static void main(String[] args) {
		Bottle b = new InterfaceWithBody();
		b.demo();
		Bottle.demo1(); //static methods can be called using their class name
	}
}

class Bucket implements Bottle{
	//interface does not need to compulsarily add method of interface class 
}
