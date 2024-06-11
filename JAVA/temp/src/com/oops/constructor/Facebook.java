package com.oops.constructor;

class Meta {

	public Meta(float f, int y) {

		System.out.println("meta parameter");
	}

}

public class Facebook extends Meta {

	public Facebook() {

		super(100.0f, 90);
	}

	public Facebook(int o) {

		super(100.0f, 90);
	}

	public static void main(String[] args) {

		Facebook f = new Facebook(100); //child parameter...
		Facebook f1 = new Facebook(); //child parameter...
		

	}
}