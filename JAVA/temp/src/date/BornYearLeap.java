package date;

import java.sql.Date;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Scanner;

public class BornYearLeap {
	public static void main(String[] args) throws ParseException {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter your birthday in YYYY-MM-dd formate : ");
		String year = sc.next();
		
		SimpleDateFormat df = new SimpleDateFormat("yyyy-MM-dd");
		java.util.Date date = df.parse(year);
		System.out.println(year);
		
		Calendar c = Calendar.getInstance();
		int by = c.get(Calendar.YEAR);
		int today = c.get(Calendar.YEAR);
		
		
		
		if((by % 4 == 0 && by % 100 != 0) || (by % 400 == 0))
		{
			System.out.println("you are born in leap year");
		}
		else
		{
			System.out.println("not a leap year");
		}
		
		int age = today ;
		System.out.println("your age is "+age);
	}
}
