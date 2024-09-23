package file;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class PalindromeEg {
	public static void main(String[] args) {
		
		int count=0,i,tmp=0;
		String ar=null;
		
		try(Scanner sc = new Scanner(new File("demo.txt"))) {
			
			while(sc.hasNext()) {
			    
				
				ar = sc.next();
				System.out.println(ar);
				count++;
			 

			}
			System.out.println(count);
			for (i = 0; i < count / 2; i++)
			    {
			        if (ar[i] == ar[(count - 1) - i])
			        {
			            tmp++;
			        }
			    }
			    if (tmp == (count / 2))
			    {
			        tmp++;
			    }
			    else
			    {
			        continue;
			    }
			}
			
			
			
			
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}





package com.io;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class PalindromeEg {

	// the //ok

	public static boolean isPalindrome(String str) {
		// abbbba

		int start = 0;
		int end = str.length() - 1;

		// 0 end 4
		// 1 end 3
		while (start < end) {
			// [0] = n !=[4]n
			// a[1] =a !=3[a] false
			if (str.charAt(start) != str.charAt(end)) {
				return false;

			}
			start++; // 1 //2
			end--;// 3//2
		}
		return true;

	}

	public static void main(String[] args) {

		try {
			Scanner sc = new Scanner(new File("pali.txt"));
			int count = 0;
			while (sc.hasNext()) {

				String word = sc.next();// the // ok
				if (isPalindrome(word)) {
					count++;
				}

			}
			System.out.println("count = "+count);
			
			String[] palindromes = new String[count];
			int index = 0;
			while (sc.hasNext()) {

				String word = sc.next();// the // ok
				if (isPalindrome(word)) {
					// palindromes[0] = "naman"
					// palindromes[1] = "jay"
					palindromes[index++] = word;
				}

			}
			// sop(word);

			for (int i = 0; i < palindromes.length; i++) {

				System.out.println(palindromes[i]);
			}

		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}
}
