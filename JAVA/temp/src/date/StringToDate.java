package date;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class StringToDate {

	public static void main(String[] args) {
		
		String strDate = "2024-02/14";
		SimpleDateFormat df = new SimpleDateFormat ("yyyy-MM/dd");
		try {
			Date date = df.parse(strDate);
			System.out.println(date);
		} catch (ParseException e) {
			// TODO Auto-generated catch block
			e. printStackTrace ();
		}
	}
}
