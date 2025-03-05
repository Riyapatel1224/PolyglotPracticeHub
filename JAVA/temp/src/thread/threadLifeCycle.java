package thread;

public class threadLifeCycle extends Thread{
	
	@Override
	public void run() {
		System.out.println(Thread.currentThread().getName()+" is running");
		
		try {
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		for(int i=1;i<=5;i++) {

			System.out.println(Thread.currentThread().getName() + "  is running "+i);
		}
	} 
	
	public static void main(String[] args) {
		
		
		threadLifeCycle t1 = new threadLifeCycle();
		threadLifeCycle t2 = new threadLifeCycle();
		threadLifeCycle t3 = new threadLifeCycle();
		threadLifeCycle t4 = new threadLifeCycle();
		
		t1.setName("A");
		t2.setName("B");
		t3.setName("C");
		t4.setName("D");
		
		t1.start();
		
		System.out.println(Thread.currentThread().getName());
		
//		try {
//			Thread.sleep(2000);
//		} catch (InterruptedException e) {
//			// TODO Auto-generated catch block
//			e.printStackTrace();
//		}
		
		t2.start();
		t3.start();
		t4.start();
	}
}
