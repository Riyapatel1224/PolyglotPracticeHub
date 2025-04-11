package dsa;

import java.util.LinkedList;
import java.util.Scanner;

public class LLDemo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		LinkedList<Student> list = new LinkedList<Student>();
		
		while(true) {
			System.out.println("enter the choice \n1.add \n2.display \n3.exit \nEnter Choice");
			int choice = sc.nextInt();
			
			switch (choice) {
			case 1:
				Student s = new Student();
				s.getData();
				list.add(s);
				break;
				
			case 2:
				for(Student x : list) {
					x.display();
				}
			default:
				break;
			}
		}
	}
}


class Student{
	
	String name;
	int eng,math,sci;
	
	void getData() {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the name of the student and marks of english maths and science");
		name = sc.next();
		eng = sc.nextInt();
		math = sc.nextInt();
		sci = sc.nextInt();
	}
	
	void display() {
		System.out.println(name + " " + eng + " " + math + " " + sci);
	}
}

