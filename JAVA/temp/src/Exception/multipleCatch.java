package Exception;

import java.util.InputMismatchException;
import java.util.Scanner;


public class multipleCatch {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			System.out.println("enter number 1: ");
			int a = sc.nextInt();
			System.out.println("enter number 2: ");
			int b = sc.nextInt();
			int ans = a/b;
			
		}
		catch(ArithmeticException | InputMismatchException e) {
			System.out.println("error occures check input");
		}
	}
}
