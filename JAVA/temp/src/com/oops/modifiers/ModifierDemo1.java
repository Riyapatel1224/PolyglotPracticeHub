package com.oops.modifiers;

public class ModifierDemo1 {
	
	private int id;
	int data;
	protected int x;
	
	public void test() {
		System.out.println(id);
		System.out.println(data);
		System.out.println(x);

	}
	
	public static void main(String[] args) {
		
		
		// to print here you have to make all variable static 
//		System.out.println(id);
//		System.out.println(data);
//		System.out.println(x);
	}
}

/*
            same class     sub class same package     sub class diff package      non sub class dff package
private         yes                 no                      no                              no
default		    yes					yes						no								no
protected		yes					yes						yes								no
public			yes					yes						yes								yes
*/




