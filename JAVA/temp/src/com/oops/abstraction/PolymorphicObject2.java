package com.oops.abstraction;

interface Dog{
	void bark();
}

interface Cat{
	void meow();
}

public class PolymorphicObject2 implements Dog,Cat{
	public static void main(String[] args) {
		Dog d = new PolymorphicObject2();
		System.out.println("Dog");
		d.bark();
//		d.meow(); the both belongs to child or different class therefore it will not work with this class 
//		d.food();
		
		Cat c = new PolymorphicObject2();
		System.out.println("meow");
		c.meow();
//		c.bark();
//		c.food();
		
		PolymorphicObject2 obj = new PolymorphicObject2();
		System.out.println("child class");
		obj.bark();  //in child class object can call all the method of parent class as well as its own.
		obj.meow();
		obj.food();
	}
	
	public void food() {
		System.out.println("food method from child class");
	}
	
	public void bark() {
		System.out.println("bark method from child class");
	}
	
	public void meow() {
		System.out.println("meow method from child class");
	}
}
