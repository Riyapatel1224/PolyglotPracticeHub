package stringEg;
import java.util.Scanner;

public class StringExample {
	public static String revString(String name) {
		String revString="";
		for(int i=name.length();i>=0;i--) {
			
			revString = revString + name.charAt(i);
		}
		return revString;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a name: ");
		String name = sc.nextLine();
		System.out.println("noraml name: " + name);
		String name1 = revString(name);
		System.out.println("reverse name: " + name1);
	}
}
