import java.io.*;
import java.util.*;
class cmdl
{
 public static void main(String args[]) throws IOException
 {
   int a,b,c;
     double avg;
       int add;
    a = Integer.parseInt(args[0]);
    b = Integer.parseInt(args[1]);
     c = Integer.parseInt(args[2]);

    if(a < 0)
     System.out.println("Negative no");
   
    else
         add = a+b+c;
        avg = add/3;
    System.out.println("the avg is"+avg);
       System.out.println("the addition is"+add);
 }
}

      
         
