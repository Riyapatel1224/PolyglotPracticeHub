package com.oops.abstraction;

	
	abstract class GParent{
		public abstract void loan();
	}
	abstract class Parent extends GParent{
		// no need to override
		public void loan() {
		}
	}

	public class AbstractDemo1 extends Parent {
		

		public void loan() {
		}
		
		public static void main(String[] args) {
			GParent gp = new AbstractDemo1();
			Parent p = new AbstractDemo1();
		}
	}





