package Exception;

public class nullpointerEg {
	public static void main(String[] args) {
		try {
			String arr[]= null;
			for(int i=0;i<5;i++) {
				System.out.println(arr[i]);
			}
		}
		catch(NullPointerException e) {
			System.out.println("NullPointerException");
		}
		
	}
}
