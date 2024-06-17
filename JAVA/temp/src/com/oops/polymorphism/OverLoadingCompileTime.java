// compile time Polymorphism : also known as early binding | Static binding 
// one name many forms 
// functions can be of same name but different parameter and return type


package com.oops.polymorphism;


class ParentOfChild{
	public void shape() {
		System.out.println("default shape of parent");
	}
}

public class OverLoadingCompileTime extends ParentOfChild{
	
	public void shape() {
		System.out.println("default Shape of child");
	}
	
	public void shape(float r) {
		System.out.println("shape of circle : "+(3.14)*(r*r));
	}
	
	public void shape(int h, int w) {
		System.out.println("shape of Reactangle : "+ (h*w));
	}
	
	public void shape(int h) {
		System.out.println("shape of square : "+h*h);
	}
	
	public static void main(String[] args) {
		OverLoadingCompileTime obj = new OverLoadingCompileTime();
		obj.shape(); //child 
	}

}
