package set;
import java.util.HashSet;

class Mobile{
	int id;
	String name;
	
	public Mobile(int id,String name)
	{
		this.id=id;
		this.name = name;
	}
}


public class HashSet2 {
	public static void main(String[] args) {
		
		HashSet<Mobile> m = new HashSet<Mobile>();
		
		m.add(new Mobile(1,"fold"));
	}
}
