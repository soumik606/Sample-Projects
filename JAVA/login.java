package com.webapp;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class login extends HttpServlet {
	public void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException{
		String email = req.getParameter("email");
		String password = req.getParameter("passwd");
		try {
			Connection con = jdbc.initializeDatabase();
			PreparedStatement st =con.prepareStatement("Select * from users where email = ? and password = ?");
			st.setString(1, email);
			st.setString(2, password);
			ResultSet rs = st.executeQuery();
			PrintWriter out = resp.getWriter();
			if(!rs.next()) {
				
				out.println("<html><body><b>Login Failed</b></body></html>");
			}
			else {
				out.println("<html><body><b>Welcome and yoour login was success</b></body></html>");
			}
			
		}
		catch(Exception e) {
			System.out.print(e);
		}
	}
}
