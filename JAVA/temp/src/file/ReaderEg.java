package file;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class ReaderEg {
	public static void main(String[] args) throws IOException {
		try {
			FileReader reader = new FileReader("demo.txt");
			int c=0;
			while((c=reader.read())!= -1) {
				System.out.print((char)c);
			}
			
			reader.close();
			
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
