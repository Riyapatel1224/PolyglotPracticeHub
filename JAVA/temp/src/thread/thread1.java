package thread;

import java.util.ArrayList;
import java.util.List;

public class thread1 {

	static List<String> fruits;
	public static int index =0;
	public static void main(String[] args) {
		
		fruits = new ArrayList<String>();
		
		fruits.add("Apple");
		fruits.add("Banana");
		fruits.add("Kiwi");
		fruits.add("Lichi");
		fruits.add("Mango");
		
		Thread t1 = new Thread(thread1 :: process);
		Thread t2 = new Thread(thread1 :: process);
		Thread t3 = new Thread(thread1 :: process);
		
		t1.setName("a");
		t2.setName("b");
		t3.setName("c");
		
		t1.start();
		t2.start();
		t3.start();
		
		
		
	}
	
	public static synchronized  void process(){
		while(index<(fruits.size())) {
			System.out.println(Thread.currentThread().getName()+" -> "+fruits.get(index));
			index++;
		}
	}
}
