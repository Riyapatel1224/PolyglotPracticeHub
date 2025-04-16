package project.google.controller;

import java.io.IOException;
import java.io.PrintWriter;

//import javax.security.auth.message.callback.PrivateKeyCallback.Request;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;



@WebServlet("/SignupServlet")
public class SignupServlet extends HttpServlet{
	
	
	
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		System.out.println("servlet...");
		
		String userName = req.getParameter("userName");
		String email = req.getParameter("email");
		String password = req.getParameter("password");
		
		System.out.println("name : "+userName);
		System.out.println("email: "+email);
		System.out.println("password: "+password);
		
		resp.setContentType("text/html");
		
		PrintWriter out = resp.getWriter();
		
		boolean isError = false;
		String errorMsg = "";
		
		if(userName == null || userName.isBlank()) {
			isError = true;
			errorMsg += "Enter User Name <br>";
		}
		if(email == null || email.isBlank()) {
			isError = true;
			errorMsg += "Enter email <br>";
		}
		if(password == null || password.isBlank()) {
			isError = true;
			errorMsg += "Enter password <br>";
		}
		
		if(isError == true) {
			out.print(isError);
		}
		else {
			out.println("<br>name : "+userName);
			out.println("<br>email: "+email);
			out.println("<br>password: "+password);
		}
		
		
		
	}
}