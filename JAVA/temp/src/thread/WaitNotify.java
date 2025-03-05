package thread;



class Calling{
	public synchronized void doCall(int flag) {
		System.out.println("Current call is running "+Thread.currentThread().getName());
		
		if(flag == 1) {
			System.out.println("current running call is putting on hold");
			System.out.println(Thread.currentThread().getName()+"is putting to wait");
			
			try {
				wait();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			System.out.println(Thread.currentThread().getName() + " resumed its call after being notified.");
		}
		else {
			notify();
			System.out.println("holded call received");
			
		}
		System.out.println("All call done");
	}
	
	
	

}

class Call1 extends Thread{
	Calling c;
	public Call1(Calling c) {
		this.c = c;
	}
	
	@Override
	public void run() {
		c.doCall(1);
	}
}

class Call2 extends Thread{
	Calling c;
	public Call2(Calling c) {
		this.c = c;
	}
	
	@Override
	public void run() {
		c.doCall(0);
	}
}

public class WaitNotify {
	
	public static void main(String[] args) {
		Calling calling = new Calling();
		Call1 c1 = new Call1(calling);
		Call2 c2 = new Call2(calling);
		
		c1.setName("amit");
		c2.setName("Raj");
		
		c1.start();
		c2.start();
	}
}
