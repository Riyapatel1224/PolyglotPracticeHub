package file;


import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;


// big length of the single line store in array and print it
public class Buffer2 {
	
	
	public static void main(String[] args) {
//		Scanner data = new Scanner(System.in);
//		String input = data.nextLine(); 
		
	
		String data1 = "";
		try (BufferedReader read = new BufferedReader(new FileReader("demo.txt"))) {
		
			while((data1 = read.readLine())!=null) {
				System.out.println(data1);
			}
			
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
