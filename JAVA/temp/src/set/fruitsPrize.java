package set;

import java.util.Comparator;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.Map.Entry;


class FruitComparator implements Comparator<String>
{
	public int compare(String s1, String s2) {
		// TODO Auto-generated method stub
		return Integer.compare(s1.length() , s2.length());
	}
}


public class fruitsPrize {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(true)
		{
			int choice;
			System.out.println("1. Enter 2. Exit");
			choice = sc.nextInt();
			
			switch(choice) {
				case 1:
					Map<String, Integer> m = new TreeMap<String,Integer>(new FruitComparator());
					m.put("mango", 100);
					m.put("kiwi", 20);
					m.put("dragonfruit", 70);
					
					for(Entry<String, Integer> map:m.entrySet()) {
						System.out.println(map.getKey()+' '+map.getValue());
					}
					break;
					
				
				case 2:
					break;
					
					
				default:
					System.out.println("Wrong choice try again");
			}
			
			
			
		}
	}
}
