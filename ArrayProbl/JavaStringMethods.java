import java.io.*;
import java.util.*;
import java.lang.*;
class JavaStringMethods
{
 public static void main(String args[])
 {
   String s1 = "i like my mother";
    String s2 = "i like my family";
 //  String s3,s4,s5;
  
   String[] values = { "bird", "cat", "wildebeest" };

	// Join the elements together.
	String result = String.join("...", values);
	System.out.println(result);
//  System.out.println(s3);
}
}
