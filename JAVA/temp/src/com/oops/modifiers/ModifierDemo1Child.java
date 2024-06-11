package com.oops.modifiers;



public class ModifierDemo1Child extends ModifierDemo1{
	
	public void test() {
		
		//error because it is private and cannot be access outside of the file
//		System.out.println(id);
		System.out.println(data);
		System.out.println(x);

	}
	
	public static void main(String[] args) {
		
	}
}
