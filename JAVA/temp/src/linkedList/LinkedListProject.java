package linkedList;

import java.util.LinkedList;
import java.util.Scanner;

import javax.swing.LayoutFocusTraversalPolicy;



public class LinkedListProject {
	static LinkedList<Integer> avail  = new LinkedList<Integer>();
	static LinkedList<Integer> reserv  = new LinkedList<Integer>();
	int SeatNo;
	Boolean isReserve;
	
	public static void generateSeats() {
		for(int i=0;i<20;i++) {
			try {
				avail.add(i);
			} catch (Exception e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	public static void BookTickets() {
		
		if (avail.isEmpty()) {
		        System.out.println("Error: No available seats to reserve!");
		        return;
		 	}
		if (reserv.size() >= 20) {
		        System.out.println("Error: All seats are already reserved!");
		        return;
		    }
		
//		if(reserv.size()!=reserv.getLast())
//		{}
//		else
//		{
			try {
		        int reservedSeat = avail.removeFirst();

		        reserv.addLast(reservedSeat);
		        int reservedSeatdis = reservedSeat+1;
		        System.out.println("Seat reserved successfully: " + reservedSeatdis);
		        
		    } 
			
			catch (Exception e) {
		        System.out.println("Unexpected error occurred: " + e.getMessage());
		    }
//		}
			
		
	}
	
	public static void Layout()
	{
		System.out.println("--------Lyout--------");
		System.out.println("Available Seats");
		try {
			if(avail.isEmpty()) {
				System.out.println("NONE");
			}
			else
			{
				for(int seat : avail) {
					System.out.print(seat+1 + " ");
				}
				
			}
			System.out.println();
		} catch (Exception e) {
			e.printStackTrace();
		}
		System.out.println("Reserve Seats");
		if(reserv.isEmpty()) {
			System.out.println("NONE");
		}
		else
		{
			for(int seat : reserv) {
				System.out.print(seat+1 +" ");
			}
		}
		System.out.println();
	}
	
	public static void cancleTicket(int seat) {
		
		if (reserv.isEmpty()) {
	        System.out.println("Error: No available seats to cancel!");
	        return;
	 	}
		
		for(int i=0;i<20;i++) {
			if(seat==reserv.get(i+1)) {
				reserv.remove(i);
				break;
			}
			else {
				continue;
			}
		}
		
	}
	
	public static void main(String[] args) {
		
		generateSeats();
		Scanner sc = new Scanner(System.in);
		while(true)
		{
			System.out.println("Enter what you want: ");
			System.out.println("1.Book a ticket");
			System.out.println("2.cacel Ticket");
			System.out.println("3.Show layout");
			System.out.println("4.Exit");
			int action = sc.nextInt();
			
			switch (action) {
			case 1:
				BookTickets();
				break;
				
			case 2:
				System.out.println("Enter the seat you want to cancle: ");
				int seat = sc.nextInt();
				cancleTicket(seat);
				break;
				
			case  3:
				Layout();
				break;
				
			default:
				break;
			}
		}
	}

	
}
