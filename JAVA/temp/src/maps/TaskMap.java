package maps;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Scanner;
import java.util.TreeMap;

public class TaskMap {
	public static void main(String[] args) {
		Map<String, String> m = new TreeMap<String,String>();
		
		Scanner sc = new Scanner(System.in);
		boolean l = true;
		while(l) {
			System.out.println("1. Enter country and its capital 2. display 3. exit");
			int choice = sc.nextInt();
			
			switch(choice) {
			case 1:
				System.out.print("Enter name of the country: ");
                String nameCountry = sc.next();

                if (m.containsKey(nameCountry)) {
                    System.out.println("Country already exists.");
                    break;
                }

                System.out.print("Enter name of the country's capital: ");
                String nameCapital = sc.next();
                m.put(nameCountry, nameCapital);
                System.out.println("Country and capital added successfully.");
                break;

			
			case 2:
				for(Entry<String, String> map:m.entrySet()) {
						System.out.println(map.getKey()+' '+map.getValue());
					}
				break;
			
			case 3:
				System.out.println("THANK YOU..");
				l = false;
				break;
					
		}
	}
}
}
