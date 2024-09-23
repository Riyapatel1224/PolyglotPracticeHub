package com.regex;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Regex1 {
	
	public static void main(String[] args) {
		
		// . = anything is accepted before m but once 
//		Pattern p = Pattern.compile(".m");
//		Matcher m = p.matcher("mm");
		
		//can return either a , b or c once out of this will return false
//		Pattern p = Pattern.compile("[abc]");
//		Matcher m = p.matcher("r");
		
		//can be return a to z (small case) anything out of this will return false
//		Pattern p = Pattern.compile("[a-z]");
//		Matcher m = p.matcher("a");
		
//		Pattern p = Pattern.compile("[a-zA-Z]");
//		Matcher m = p.matcher("m");
		
//		Pattern pattern = Pattern.compile("[a-zA-Z0-9_]"); 
//		Matcher m = pattern.matcher("0");
		
		Pattern pattern = Pattern.compile("[^a-z][A-Z]");
		Matcher m = pattern.matcher("RP");
		
		System.out.println(m.matches());
	}
}
