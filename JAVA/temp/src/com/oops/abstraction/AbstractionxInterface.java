package com.oops.abstraction;

interface Earth{
	void water();
}

interface World extends Earth{
	
}

abstract class Country implements World{
	public void water() {};
}

public class AbstractionxInterface extends Country{
	public void water() {};
}

//class to class -> extends
//class to interface -> implements
//interface to interface -> extends
