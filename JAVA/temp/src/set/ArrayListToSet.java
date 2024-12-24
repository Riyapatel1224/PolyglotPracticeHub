package set;

import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;

public class ArrayListToSet {
	public static void main(String[] args) {
		
		List<String> ls = new ArrayList<String>();
		Set<String> set = new TreeSet<String>();
		
		ls.add("abc");
		ls.add("efg");
		ls.add("hij");
		ls.add("abc");
		
		for(String s : ls) {
			set.add(s);
		}
		
		for(String i : set) {
			System.out.println(i);
		}
		
	}
}
