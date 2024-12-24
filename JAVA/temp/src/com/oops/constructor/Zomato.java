package com.oops.constructor;


class Swiggy{
	int x;
	public Swiggy() {
		System.out.println("swiggy class default const called...");
	}
	public Swiggy(int fund) {
		System.out.println("swiggy param..."+fund);
	}
}
public class Zomato extends Swiggy {

	public Zomato() {
		//System.out.println(x); error....
		super(1900);
		//System.out.println(x);
		System.out.println("default const of zomato...");
	}
	
	public static void main(String[] args) {
		
		
		
		Zomato z = new Zomato();
		
		
	}
}