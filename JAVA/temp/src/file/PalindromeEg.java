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
