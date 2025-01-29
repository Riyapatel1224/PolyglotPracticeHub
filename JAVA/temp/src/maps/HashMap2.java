package maps;

import java.security.KeyStore.Entry;
import java.util.HashMap;

class Books{
	private int id;
	private String name;
	private int price;
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	
	public Books(int id,String name,int price) {
		this.id = id;
		this.name = name;
		this.price = price;
	}
	
	public Books() {
		
	}
}

public class HashMap2 {
	public static void main(String[] args) {
		HashMap<String, Books> books = new HashMap<String, Books>();
		
		Books b1 = new Books();
		b1.setId(1);
		b1.setName("abc");
		
		books.put("a", new Books(101, "java", 100));
		books.put("B", b1);
		
		for(java.util.Map.Entry<String, Books> map : books.entrySet()) {
			System.out.println(map.getKey());
			
			Books b = (Books)map.getValue();
			System.out.println(b.getId() + " "+b.getName() + " "+b.getPrice());
		}
	}
}	
