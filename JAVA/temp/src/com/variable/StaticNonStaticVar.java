package com.Variable;


public class StaticNonStaticVar {
	//instance variable
	//initialization is not compulsary
	//non static variable
	//cannot use non-static instance variable inside static method
	int a;
	
	//non-static variable
	//if not assigned it will give defualt value of 0 to variable
	static int b;
	
	int balance;
	static int InterestRate;
	
	public void test() {
		
		//both satic and non static variable can be used inside non-static method
		
		System.out.println(a);
		System.out.println(b);
	}
	
	
	
	public static void main(String args[]) {
		
//		System.out.println(a); //error...
		System.out.println(b);
		
		StaticNonStaticVar obj1 = new StaticNonStaticVar();
		StaticNonStaticVar obj2 = new StaticNonStaticVar();
		StaticNonStaticVar obj3 = new StaticNonStaticVar();
		obj1.test();
		
		
		obj1.balance = 1000;
		obj2.balance = 2000;
		obj3.balance = 3000;
		//non static variable will generate copies as many as the objects created
		
		
		System.out.println(obj1.balance); //1000
		System.out.println(obj2.balance); //2000
		System.out.println(obj3.balance); //3000
		
		
		//override the data and will create only one copy 
		//last accessed variable
		obj1.InterestRate = 10;
		obj2.InterestRate = 20;
		obj3.InterestRate = 30;
		
		
		System.out.println(obj1.InterestRate); //30
		System.out.println(obj2.InterestRate); //30
		System.out.println(obj3.InterestRate); //30
		
		int a=10;
		//cannot creare static varibale inside method reason heap and stack 
//		static int b1; 
		
		System.out.println(a);
//		System.out.println(b1);
		
		
		
		
		
	}
}
