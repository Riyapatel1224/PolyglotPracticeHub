package project.google.controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;


@WebServlet("/RequestDispatcherdemo")
public class RequestDispatcherdemo extends HttpServlet{
	
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		
		String name = req.getParameter("name");
		
		boolean isEmpty = false;
		
		if(name == null || name.isBlank()) {
			RequestDispatcher rd = req.getRequestDispatcher("RequestDispactherdemo.jsp");
			rd.forward(req, res);
		}
		else {
			RequestDispatcher rd = req.getRequestDispatcher("RDResult.jsp");
			rd.forward(req, res);
		}
	}
}
