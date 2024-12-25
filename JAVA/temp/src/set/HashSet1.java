package set;

import java.util.HashSet;

public class HashSet1 {
	public static void main(String[] args) {
		HashSet<String> hs = new HashSet<String>();
		
		hs.add("abc");
		hs.add("efg");
		hs.add("hi");
		hs.add("hij");
		hs.add("abc");
		
		for(String i:hs) {
			System.out.println(i);
		}
	}
}
