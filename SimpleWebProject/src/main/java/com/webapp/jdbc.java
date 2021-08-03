package com.webapp;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Driver;
public class jdbc {

protected static Connection initializeDatabase() throws SQLException, ClassNotFoundException{
		String dbDriver = "com.mysql.jdbc.Driver";
        String dbURL = "jdbc:mysql:// localhost:3306/";
        String dbName = "data";
        String dbUsername = "root";
        String dbPassword = "Soumik18";
 
        Class.forName(dbDriver);
        Connection con = DriverManager.getConnection(dbURL + dbName,
                                                     dbUsername,
                                                     dbPassword);
        return con;
}
}