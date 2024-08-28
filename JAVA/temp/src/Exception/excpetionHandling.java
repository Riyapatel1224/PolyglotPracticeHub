package Exception;

import java.util.InputMismatchException;
import java.util.Scanner;

public class excpetionHandling {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		try {
			System.out.println("Enter first number");
			int a =  sc.nextInt();
			System.out.println("Enter sencond number");
			int b =  sc.nextInt();
			int mul = a/b;
			System.err.println("ans = "+mul);
		}
		catch(ArithmeticException e)
		{
			System.out.println("/ by zero exception occurs");
		}
		catch(InputMismatchException e) {
			System.out.println("Enter valid input");
		}
		catch(Exception e) {
			System.out.println("Error Occure");
		}
		finally{
			System.err.println("End of the program");
		}
	}
}
