package Exception;

import java.io.File;
import java.io.FileReader;
import java.io.IOError;
import java.io.IOException;
import java.util.InputMismatchException;
import java.util.Scanner;

public class tryResourceBlock {
	 public static void main(String[] args) {
		try(FileReader reader = new FileReader("")){
			
		}
		catch(IOException e){
			
		}
		
		try(Scanner sc = new Scanner(System.in)){
			
		}
		catch(InputMismatchException e) {
			
		}
	}
}
