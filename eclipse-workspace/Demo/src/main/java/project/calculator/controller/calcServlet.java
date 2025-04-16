package project.calculator.controller;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/calcServlet")
public class calcServlet extends HttpServlet{
	

	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		
		String num1 = req.getParameter("num1");
		String num2 = req.getParameter("num2");
		String choice = req.getParameter("operation");
		
		resp.setContentType("text/html");
		PrintWriter out = resp.getWriter();
		
		if(num1 == "" || num2 == "") {
			out.println("Enter the detailes");
		}
		else if(Integer.parseInt(num1)<0 || Integer.parseInt(num2)<0) {
			out.println("negative inputs are not allowed. Try Again");
		}
		else {
			switch(choice)
			{
				case "add":
					int sum = Integer.parseInt(num1) + Integer.parseInt(num2);
					out.println("<br>num1: "+num1);
					out.println("<br>num2: "+num2);
					out.println("<br>sum: "+sum);
					break;
					
				case "multiply":
					int mul = Integer.parseInt(num1) * Integer.parseInt(num2);
					out.println("<br>num1: "+num1);
					out.println("<br>num2: "+num2);
					out.println("<br>sum: "+mul);
					break;
					
				case "subtract":
					int sub = Integer.parseInt(num1) - Integer.parseInt(num2);
					out.println("<br>num1: "+num1);
					out.println("<br>num2: "+num2);
					out.println("<br>sum: "+sub);
					break;
					
				default :
					break;
			}
		}
		
		
		
		
			
		
		
		
		
		
		
		
		
		
	}
	
}
