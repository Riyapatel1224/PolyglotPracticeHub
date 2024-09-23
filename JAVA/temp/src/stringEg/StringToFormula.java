package stringEg;

import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class StringToFormula {
    public static void main(String[] args) {
    	
    	
       
        
        try( Scanner sc = new Scanner(System.in))
        {
        	
        
        System.out.println("Enter a formula: ");
        String s = sc.nextLine();
        
        String num1 = "", num2 = "";
        char operator = ' ';
        
        for(int i = 0; i < s.length(); i++) {            
            if(s.charAt(i) == '*' || s.charAt(i) == '+' || s.charAt(i) == '/' || s.charAt(i) == '-') {
            	//spliting
                operator = s.charAt(i);
                num1 = s.substring(0, i); 
                num2 = s.substring(i + 1); 
                break; 
            }
        }
        
//        System.out.println("1 = "+s.substring(0,2));
//        System.out.println("2 = "+s.substring(2+1));
        
        
        //conversion
        int number1 = Integer.parseInt(num1),number2 = Integer.parseInt(num2);
        int result = 0;
        
        //Arithmetic operation
        switch(operator) {
            case '+': result = number1 + number2; 
            		  break;
            case '-': result = number1 - number2; 
            		  break;
            case '*': result = number1 * number2; 
                      break;
            case '/': result = number1 / number2; 
                      break;
        }
        
        //file operation
        try(FileWriter writer = new FileWriter("answer.txt",false)) {
			
			writer.write("\nNumber 1 : "+number1);
			writer.write("\nOperation : "+operator);
			writer.write("\nNumber 2 : "+number2);
			
			writer.write("\n----------------------------");
		
			writer.write("\n"+number1+" "+operator+" "+number2+" = "+result);
			writer.close();
			System.out.println("success");
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
        
//        sc.close();
        }
        catch(ArithmeticException  | NumberFormatException e) {
        	System.out.println("enter valid input");
        }
    }
}
