**OOP concepts**

*1. classes and Objects*

for eg: 
class pen{           //Class
	String brand;    //Properties of the class / data
	String type;     //Properties of the class / data

	public void write(){   /also called members
		function/method to decribe the functionality of the class with different objects
	}
}

public class Eg{
	psvm(){
		pen p = new pen();  the Object of the class pen.
	}
}

this keyword : There can be a lot of usage of Java this keyword. In Java, 
			   this is a reference variable that refers to the current object.
			   
			   

-------------------------------------------------------
**2. Constructor**

class Student {
	String name; 
	int age;
	public void printInfo() {
	System.out. println (this.name);
	System.out. println (this.age);
	｝
｝
public class 00PS
	{
	Run | Debug
	public static void main (String args []) {
	Student s1 = new Student (); //Special type of function called constructor
	s1. name = "riya";
	s1.age = 20;
	s1. printInfo();
}
Properties of Constructor
1. Same name as Class name
2. Does not return anything 
3. can be called once when object is created


Types of constructor 
1. non-parametarized constructor:

Student (){
	System. out. println("constructor called");
}

2. parametarized constructor:

Student (String name, int age){
	this.name = name;
	this.age = age;
}

3.Copy constructors

Student(Student s2){  Student s2 is an object that is copied in another object 
	this.name = s2.name;
	this.age = s2.age;
}
Student(){}

Student s1 = new Student();
s1.name = "riya";
s1.age = 21;

Student s2 = new Student(s1); //this will pass the s1 object to s2 
s2.printfInfo();

-------------------------------------------------------

3. polymorphism : poly = many   morphism = forms

 

1. function overloading: compile-time  
						 If a class has multiple methods having same name but different in 
						 parameters, it is known as Method Overloading.
						 
2. function overriding: run-time
						If subclass (child class) has the same method as declared 
						in the parent class, it is known as method overriding in Java.

-------------------------------------------------------

4. Inheritance : multiple inheritance is not supported 

-------------------------------------------------------

5. Encapsulation : Encapsulation in Java is a process of wrapping code and data together into 
				   a single unit, for example, a capsule which is mixed of several medicines.

```JAVA
//A Java class which is a fully encapsulated class.  
//It has a private data member and getter and setter methods.  
package com.javatpoint;  
public class Student{  
//private data member  
private String name;  
//getter method for name  
public String getName(){  
return name;  
}  
//setter method for name  
public void setName(String name){  
this.name=name  
}  
}  

//A Java class to test the encapsulated class.  
package com.javatpoint;  
class Test{  
public static void main(String[] args){  
//creating instance of the encapsulated class  
Student s=new Student();  
//setting value in the name member  
s.setName("vijay");  
//getting value of the name member  
System.out.println(s.getName());  
}  
}  	   

```

-------------------------------------------------------

6. Abstraction : Abstraction is a process of hiding the implementation details and showing 
				 only functionality to the user.

There are two ways to achieve abstraction in java
1.Abstract class (0 to 100%)

abstract class Bike{  
  abstract void run();  
}  
class Honda4 extends Bike{  
void run(){System.out.println("running safely");}  
public static void main(String args[]){  
 Bike obj = new Honda4();  
 obj.run();  
}  
}  

2. Interface (100%)

interface printable{  
void print();  
}  
class A6 implements printable{  
public void print(){System.out.println("Hello");}  
  
public static void main(String args[]){  
A6 obj = new A6();  
obj.print();  
 }  
}  

7. Static keyword: The static keyword in Java is used for memory management mainly. 
				   We can apply static keyword with variables, methods, blocks and nested 
				   classes. The static keyword belongs to the class than an instance of the 
				   class.
				   







    
    
    
    
    
    
    
    
    
    
    