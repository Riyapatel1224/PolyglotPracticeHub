package list;

import java.util.ArrayList;
import java.util.List;

class Student{
	int id;
	String name;
	float marks;
	
	public Student(int id,String name,float marks) {
		this.id = id ;
		this.name= name;
		this.marks = marks;
	}
}

public class List2 {
	public static void main(String[] args) {
		
		List<Student> stu = new ArrayList<Student>();
		stu.add(new Student(101,"riya",10.10f));
		stu.add(new Student(102,"krisha",20.10f));
		stu.add(new Student(103,"khushi",30.10f));
		
		for(Student s:stu) {
			System.out.println(s.id+" "+s.name+" "+s.marks);
		}
	}
}
