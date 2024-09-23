package file;

import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Addition {
	public static void main(String[] args) {
		
		try(Scanner sc = new Scanner(System.in)) {
		
		int sum=0;
		System.out.println("Enter num1: ");
		int num1 = sc.nextInt();
		System.out.println("Enter num2: ");
		int num2 = sc.nextInt();
		sum=num1+num2;
		
		
			try (FileWriter writer = new FileWriter("abc.txt",false)) {
				writer.write("\nnum1: "+num1);
				writer.write("\nnum2: "+num2);
				writer.write("\nsum: "+sum);
				writer.close();
				System.out.println("success");
				
			}
			
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
}
