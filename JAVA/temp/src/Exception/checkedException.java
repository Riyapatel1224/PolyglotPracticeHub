package Exception;



public class checkedException {
	
	public int divide(int a, int b) throws ArithmeticException{
		return a/b;
	}
	
	/// java class | user defint | --> method use --> if that method has thrown any
	/// excpetion it will cause compile time exception..
	
	public static void main(String[] args) throws Exception {
		checkedException ce = new checkedException();
		
//		try {
//		ce.divide(12, 0);
//	}catch (Exception e) {
//		
//		System.out.println("can not divide by zero");
//	}
		
		
		ce.divide(1, 2);
	}
}
