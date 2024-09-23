package com.regex;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Regex2 {
	public static void main(String[] args) {
		//Pattern pattern = Pattern.compile(".+");
		//Pattern pattern = Pattern.compile("[abc]+"); 
		//Pattern pattern = Pattern.compile("[a-zA|Z]+"); 
		//Pattern pattern = Pattern. compile("[a-zA-Zj*"); 
		//Pattern pattern = Pattern.compile("[a-zA-Z]?"); 
		//Pattern pattern = Pattern.compile("[a-zA-Z]{0,3}"); 
		Pattern pattern = Pattern.compile("[6-9]{1}[0-9]{9}"); 
		Matcher m = pattern.matcher ("9000000000");
		System.out.println(m.matches());
	}
}
