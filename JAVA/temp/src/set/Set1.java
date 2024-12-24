package set;

import java.util.Set;
import java.util.TreeSet;

public class Set1 {
	public static void main(String[] args) {
		Set<String> set = new TreeSet<String>();
		
		set.add("jay");
		set.add("amit");
		set.add("zara");
		set.add("parth");
		set.add("parth");
		
		System.out.println(set.contains("amit"));
//		set.isEmpty();
		int size = set.size();
		
		System.out.println(size);
		
		boolean x = set.remove("amit");
		
		System.out.println("x "+x);
		
		for(String s:set)
		{
			System.out.println(s);
		}
	}
}
