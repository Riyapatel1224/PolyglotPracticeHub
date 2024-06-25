package stringEg;

public class String1 {
	
	public static void main(String[] args) {
		
	
	String name = "ABC";
	System.out.println("name = "+name);
	//String is immutable in java 
	
	//concatination
	name = name.concat(" XYZ");
	System.out.println("name : "+name);
	
	//Upper Lower Case
	name = name.toUpperCase();
	System.out.println("after upper : "+name);
	
	name = name.toLowerCase();
	System.out.println("lower case : "+name);
	
	//find length of the string
	int len  = name.length();
	System.out.println("len of string : "+len);
	
	String email = "  abc@gmail@.com ";
	System.out.println("email len : "+email.length());
	
	//erase space from String
	email = email.trim();
	System.out.println("email len :  "+email.length());
	
	//return index of specific character
	int ind  = email.indexOf('@');
	System.out.println("index of "+ind);
	
	//return last index of specific character
	int lind = email.lastIndexOf('@');
	System.out.println("last index : "+lind);
	
	//return specific character starting from particular index
	ind = email.indexOf('@', 5);
	System.out.println("index of from char: "+ind);
	
	//return the character from specific index 
	char c = email.charAt(3);
	System.out.println("c = "+c);
	}
}
