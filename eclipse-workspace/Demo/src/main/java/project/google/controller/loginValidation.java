package project.google.controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/loginValidation")
public class loginValidation extends HttpServlet{
	
	
	protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		
		String username = req.getParameter("username");
		String bd = req.getParameter("bd");
//		System.out.println(username);
		boolean isError = false;
		
		String alphaRegEx = "[a-zA-Z]+";
		String alphaInt = "[0-9,/]+";
		String alphaEmail = "[a-zA-Z,@]+";
		
		if(username == null || username.isBlank()) {
			req.setAttribute("firstNameError","Please Enter FirstName");
			isError = true;
		}
		if(bd == null || bd.isBlank()) {
			req.setAttribute("firstNameError","Please Enter birthday");
			isError = true;
		}
		else
		{
			if(username.matches(alphaRegEx)==false) {
				req.setAttribute("firstNameError","Please Enter Valid FirstName");
				isError = true;
			}
			else if(bd.matches(alphaInt)==false) {
				req.setAttribute("firstNameError","Please Enter Valid birthday");
				isError = true;
			}
		}
		
		if(isError == true) {
			RequestDispatcher rd = req.getRequestDispatcher ("login.jsp");
			rd.forward(req, res);
		}
		else {
			RequestDispatcher rd = req.getRequestDispatcher ("OutputName.jsp");
			rd.forward(req, res);
		}
	}
}
