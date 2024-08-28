package Exception;

class invalidException extends Exception{
	public invalidException(String str) {
		super(str);
	}
}


public class customException1 {
	
	
	public void checkAge(int age) throws invalidException {
		if(age<18) {
			throw new invalidException("age must be greater than 18");
		}
	}
	
	public static void main(String[] args) throws invalidException{
		customException1 obj = new customException1();
		obj.checkAge(12);
	}
	
}

