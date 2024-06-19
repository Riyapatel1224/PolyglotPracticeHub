package com.oops.abstraction;

interface Messagable{
	void msg();
}

interface Textable{
	void text();
}


public class Interface2 implements Messagable, Textable{
	
	public void msg() {};
	public void text() {};
}
