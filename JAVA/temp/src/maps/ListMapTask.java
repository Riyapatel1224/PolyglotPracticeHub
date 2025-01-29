package maps;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Random;

public class ListMapTask {
	public static void main(String[] args) {
		List<String> list = new ArrayList<String>();
		Random random = new Random();
		
		list.add("a");
		list.add("b");
		list.add("c");
		list.add("d");
		list.add("e");
		list.add("f");
		
		
		Map<String, Integer> states = new HashMap<String,Integer>();
		
		for(String s : list) {
			int lottery = random.nextInt(50);
			states.put(s, lottery);
		}
		
			for(Entry<String, Integer> map: states.entrySet()) {
			
			System.out.println(map.getKey()+" "+map.getValue());

		}
	}
}
