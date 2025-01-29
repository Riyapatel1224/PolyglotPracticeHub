package maps;

import java.security.KeyStore.Entry;
import java.util.HashMap;
import java.util.Map;

public class HashMapdemo {
	public static void main(String[] args) {
		Map<Integer, String[]> states = new HashMap<Integer, String[]>();
		
		states.put(1, new String[] {"india","usa","china"});
		states.put(2, new String[] {"india1","usa1","china1"});
		states.put(3, new String[] {"india2","usa2","china2"});
		
		
		for(java.util.Map.Entry<Integer, String[]> map: states.entrySet()) {
			
			System.out.println(map.getKey());
			
			for(String s : (String[])map.getValue()) {
				System.out.println(s);
			}
		}
	}
}
