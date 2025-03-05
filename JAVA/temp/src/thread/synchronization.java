package thread;


class Table{
	
	public synchronized void printTable(int no) {
		for(int i=0;i<=10;i++) {
			System.out.println(no+" * "+i+" = "+(no*i));
		}
	}
}

class Thread11 extends Thread{
	Table t;
	
	public  Thread11(Table t) {
		this.t = t;
	}
	
	public void run() {
		t.printTable(10);
	}
}

class Thread22 extends Thread{
	Table t;
	
	public  Thread22(Table t) {
		this.t = t;
	}
	
	public void run() {
		t.printTable(20);
	}
}


public class synchronization {
	
	
	public static void main(String[] args) {
		
		Table t = new Table();
		
		Thread11 t11 = new Thread11(t);
		Thread22 t22 = new Thread22(t);
		
		t11.start();
		t22.start();
		
	}
}
