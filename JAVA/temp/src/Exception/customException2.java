package Exception;

import java.util.Scanner;

public class customException2 {
	

	public static void main(String[] args) throws invalidStringException{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter name: ");
		String name = sc.next();
		
		if(name.length()<3) {
			throw new invalidStringException("name size must be greater than 2");
		}
		else {
			System.out.println("name : "+name);
		}
	}
}
