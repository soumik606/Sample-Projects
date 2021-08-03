package com.webapp;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.PreparedStatement;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.webapp.jdbc;

public class register extends HttpServlet{
	public void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException,IOException{
		String name=req.getParameter("name");
		String email=req.getParameter("email");
		String password = req.getParameter("passwd");
		try {
		Connection con = jdbc.initializeDatabase();
		PreparedStatement st =con.prepareStatement("Insert into users values(?,?,?)");
		st.setString(1, name);
		st.setString(2, email);
		st.setString(3, password);
		st.executeUpdate();
		st.close();
		con.close();
		PrintWriter out = resp.getWriter();
		out.println("<html><body><b>Successfully Inserted</b></body></html>");
		}
		catch(Exception e) {
			System.out.print(e);
		}
	}
}
