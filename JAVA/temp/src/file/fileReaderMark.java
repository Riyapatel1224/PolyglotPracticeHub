package file;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class fileReaderMark {

	public static void main(String[] args) {

		try {
			FileReader reader = new FileReader("demo.txt");
			System.out.println("initial reading...");

			for (int i = 0; i < 5; i++) {

				System.out.print((char) reader.read());
			}

			// marking position
			if (reader.markSupported()) {

				reader.mark(100);
				System.out.println("mark set of this position...\n");
			}
			// reading further
			for (int i = 0; i < 5; i++) {

				System.out.print((char) reader.read());
			}
			//reset mark
			
			System.out.println("\n stream reset to mark position.. \n");
			
			for (int i = 0; i < 5; i++) {

				System.out.print((char) reader.read());
			}

		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}