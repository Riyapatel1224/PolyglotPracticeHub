package Exception;

import java.util.Scanner;

public class arrayindexoutofboundEg {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			int arr[]= {'a','b','c'};
			for(int i=0;i<arr.length+1;i++) {
				System.out.println(arr[i]);
			}
		}
		catch(ArrayIndexOutOfBoundsException e) {
			System.out.println("ArrayIndexOutOfBoundsException");
		}
	}
}
