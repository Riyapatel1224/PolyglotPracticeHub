package set;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

//Description:
//This project allows users to:
//Add student names to a set.
//Display the list of unique names using HashSet.
//Display the sorted list of names using TreeSet.

public class SetTreeSetHashSet {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Set<String> ts = new TreeSet<String>();
		Set<String> hs = new HashSet<String>();
		
		ts.add("abc");
		hs.add("abc");
		
		ts.add("efg");
		hs.add("efg");
		
		ts.add("hij");
		hs.add("hij");
		
		ts.add("klm");
		hs.add("klm");
		
		System.out.println("Enter which type you want to display : 1. Hashset 2. TreeSet");
		int choose = sc.nextInt();
		
		
		switch (choose) {
		case 1:
			for(String h : hs) {
				System.out.println(h);
			}
			break;

		case 2:
			for(String t : ts) {
				System.out.println(t);
			}
			break;
		
		default:
			break;
		}
		
	}
}
