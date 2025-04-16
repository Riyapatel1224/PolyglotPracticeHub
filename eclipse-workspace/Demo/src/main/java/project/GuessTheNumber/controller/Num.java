package project.GuessTheNumber.controller;

import java.io.IOException;
import java.security.KeyStore.Entry.Attribute;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.jasper.tagplugins.jstl.core.Set;


@WebServlet("/Num")
public class Num extends HttpServlet{
		
	
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		String num1 = req.getParameter("num1");
		String num2 = req.getParameter("num2");
		String num3 = req.getParameter("num3");
		
		resp.setContentType("text/html");
		
		double RandomInt = Math.random()*36;
		
//		if((Integer.parseInt(num1) == RandomInt) || (Integer.parseInt(num2) == RandomInt) || (Integer.parseInt(num3) == RandomInt)) {
//			RequestDispatcher rd = req.getRequestDispatcher("guessthenumresult.jsp");
//			rd.forward(req, resp);
//		}
//		else {
//			RequestDispatcher rd = req.getRequestDispatcher("guessthereultfail.jsp");
//			rd.forward(req, resp);
//		}
		
		
		String msg ="";
		
		if((Integer.parseInt(num1) == RandomInt) || (Integer.parseInt(num2) == RandomInt) || (Integer.parseInt(num3) == RandomInt)) {
			msg = "won the game";
		}
		else {
			msg = "loose! Try Again";
		}
		
		req.setAttribute("msg", msg);
		RequestDispatcher rd = req.getRequestDispatcher("reult.jsp");
		rd.forward(req, resp);
		
		
	}
}	
