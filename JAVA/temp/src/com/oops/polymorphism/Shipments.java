package com.oops.polymorphism;

//Consider a logistics company that handles different types of shipments: 
//	air shipments, sea shipments, and land shipments. Each type of shipment
//	has a different method for calculating the shipping cost based on the weight 
//	of the package. 
//	Implement a system using runtime polymorphism that can calculate 
//	the shipping cost for different types of shipments.

//interface airshipments{
//	void airshipments();
//	void seashipments();
//	void landshipments();
//}

interface LogisticsCompany{
	int cal(int weight);
}

class AirShipments implements LogisticsCompany{
	public int cal(int weight) {
		return weight*10;
	}
}

class SeaShipments implements LogisticsCompany{
	public int cal(int weight) {
		return weight+10;
	}
}

class LandShipments implements LogisticsCompany{
	public int cal(int weight) {
		return weight/10;
	}
}


public class Shipments{
	
	public static void main(String[] args) {
//		AirShipments obj = new AirShipments();
		LogisticsCompany obj = new AirShipments();
		int a = obj.cal(100);
		System.out.println("AirShipments: "+a);
		
		
		LogisticsCompany obj1 = new SeaShipments();
		int b = obj1.cal(10);
		System.out.println("SeaShipments: "+b);
		
		
		LogisticsCompany obj2 = new LandShipments();
		int c = obj2.cal(1);
		System.out.println("LandShipments: "+c);
	}
}
