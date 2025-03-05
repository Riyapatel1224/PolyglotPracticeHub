package thread;


class Cloud{
	public void storage(String name) {
		System.out.println("authentication by "+ Thread.currentThread().getName());
		
		synchronized(this) {
			for(int i=0;i<=5;i++) {
				System.out.println("Thread :"+Thread.currentThread().getName()+"is accessing the cloud"+name);
				
			}
		}
		System.out.println("authentication done "+ Thread.currentThread().getName());
	}
}

class Gdrive extends Thread{
	Cloud c;
	
	public Gdrive(Cloud c) {
		this.c = c;
	}
	
	public void run() {
		c.storage("google drive");
	}
}

class dropbox extends Thread{
	Cloud c;
	
	public dropbox(Cloud c) {
		this.c = c;
	}
	
	@Override
	public void run() {
		c.storage("dropbox");
	}
}


public class ThreadBlock {
	public static void main(String[] args) {
		
		
		Cloud c = new Cloud();
		Gdrive t1 = new Gdrive(c);
		dropbox t2 = new dropbox(c);
		
		t1.start();
		t2.start();
		
		
		
	}
}
