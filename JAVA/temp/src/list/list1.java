package list;

import java.util.ArrayList;
import java.util.List;


public class list1 {
	public static void main(String[] args) {
		
		List<String> list = new ArrayList<String>();
		list.add("java");
		list.add(0,"cpp");
		list.add("C");
		
		System.out.println(list);
		System.out.println(list.get(2));
		
		for(String s: list)
		{
			System.out.println(s);
		}
		
		System.out.println(list.contains("C"));
//		list.clear();
		System.out.println("empty: "+list.isEmpty());
		System.out.println("index: "+list.indexOf("C"));
		System.out.println("last indexof "+list.lastIndexOf("cpp"));
		List<String> slist = list.subList(1, 2);
		System.out.println(slist);
		
	}
}
