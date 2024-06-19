package com.oops.abstraction;

interface Shop{
	void ac();
}

interface Bill extends Shop{
	void power();
}

public class InterfacexAbstract2 implements Bill{
	
	public void ac() {};
	public void power() {};
	
}
