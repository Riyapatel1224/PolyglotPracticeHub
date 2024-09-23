package file;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Buffer1 {
	public static void main(String[] args) {
		String data ="";
		
		try (BufferedReader read = new BufferedReader(new FileReader("demo.txt"))) {
			while((data = read.readLine())!=null) {
				System.out.println(data);
			}
			
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
	}
}
