package list;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

class Student1{
	int id;
	String name;
	float marks;
	
	public Student1(int id,String name,float marks) {
		this.id = id ;
		this.name= name;
		this.marks = marks;
	}
}

public class ListTask1 {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		Random random = new Random();
		
		
		List<Student1> stuList = new ArrayList<Student1>();
		
		
		for(int i=0;i<3;i++) {
			int id = random.nextInt(5);
			float marks = random.nextInt(50);
			System.out.println("Enter name of student1: ");
			String name1 = sc.nextLine();
			stuList.add(new Student1(id,name1,marks));
		}
		
		for(Student1 s:stuList) {
			System.out.println(s.id+" "+s.name+" "+s.marks);
		}
		
	}
}
