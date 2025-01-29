package queue;

import java.util.PriorityQueue;
import java.util.Queue;

public class BasicQueue {
	public static void main(String[] args) {
		
		Queue<String> q = new PriorityQueue<String>();
		
		q.add("sumit");
		q.add("amit");
		q.add("kunal");
		q.add("rahul");
		
		q.remove();
		q.offer("abc");
		
		for(String s:q) {
			System.out.println(s);
		}
	}
}
