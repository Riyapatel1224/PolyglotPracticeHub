package file;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class OutputStreamEg {
	public static void main(String[] args) throws FileNotFoundException {
		OutputStream output = new FileOutputStream("abc.txt");
		
		String data = "hello! this is stream Example 1";
		try {
			output.write(data.getBytes());
			
			System.out.println("done");
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
