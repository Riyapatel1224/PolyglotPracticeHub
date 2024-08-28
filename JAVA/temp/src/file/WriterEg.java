package file;

import java.io.FileWriter;
import java.io.IOException;

public class WriterEg {
	public static void main(String[] args) {
		try {
			FileWriter writer = new FileWriter("demo1.txt",true);
			
			writer.write("Hello");
			writer.close();
			System.out.println("success");
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
