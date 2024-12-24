package date;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class CalenderDemo {

	public static void main(String[] args) {
		
		Calendar c = Calendar.getInstance();
		System.out.println(c.getTime());
		c.add (Calendar.DATE, 1);
		System.out.println(c.getTime());
		c.add (Calendar.YEAR, -1);
		System.out.println(c.getTime());
	}
}
