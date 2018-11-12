import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	   Scanner in = new Scanner(System.in);
	   int x,y;
	   int t;
	  t = in.nextInt();
	  for(int i=0;i<t;i++)
	  {
	    x = in.nextInt();
	    y = in.nextInt();
	    double pow = Math.pow(x,y);
 	  System.out.println(pow);
	    if((int)pow==y)
	      System.out.println("1");
	    else
	      System.out.println("0");
	  }
		//code
	}
}
