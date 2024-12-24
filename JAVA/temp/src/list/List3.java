package list;

import java.util.ArrayList;
import java.util.List;

public class List3 {
	public static void main(String[] args) {
		String[] name11 = {"sita", "geeta", "shyam"};
		String[] name12 = {"sita1", "geeta2", "shyam3"};
		String[] name10 = {"sita12", "geeta22", "shyam33"};
		
		List<String[]> names = new ArrayList<String[]>();
		names.add(name10);
		names.add(name11);
		names.add(name12);
		
		for(String[] n: names) {
			for(String name : n) {
				System.out.println(names);
			}
			
		}
	}
}
