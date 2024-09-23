package file;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

public class InputStreamEg {
	public static void main(String[] args) {
		
		try(InputStream input = new FileInputStream(new File("abc.txt"))) {
			
			int tmp;
			while((tmp = input.read())!=-1) {
				System.out.print((char)tmp);
			}

		} catch ( IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
