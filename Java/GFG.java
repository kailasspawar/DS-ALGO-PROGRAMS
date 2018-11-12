import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int x,y;
		int t;
		t = in.nextInt();
		int pow;
		for(int i=0;i<t;i++)
		{
			x = in.nextInt();
			y = in.nextInt();
			pow = 1;
			if(x!=1)
			{  
				while(pow<y)
				{
					pow*=x;
				}

				if(pow==y) 
					System.out.println(1);
				else
					System.out.println(0);
			}

			else
				System.out.println(0);
		}         
	}
}
