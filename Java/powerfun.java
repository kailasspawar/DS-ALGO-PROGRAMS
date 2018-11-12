import java.util.*;
import java.io.*;
import java.lang.*;
class powerfun
 {
    
    public static void main(String []args)
    {
        Scanner in = new Scanner(System.in);
           double power;int j;
          double term;
        int t=in.nextInt();
        for(int i=0;i<t;i++)
         {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
           for(i=0;i<=n;i++)
           {  
              power = (Math.pow(2,i)*b); 
             term = a+power;
             System.out.println((int)term);
           }
        }
        in.close();
    }
}

