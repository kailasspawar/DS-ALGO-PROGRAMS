import java.io.*;
import java.util.*;
class EofDemo
{
 
 public static void main(String args[])throws IOException
 {
   char c;
    int i,n;
   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   FileWriter in = new FileWriter("prem.txt");
   System.out.println("Enter the info");
   System.out.println("How many characters");
   n = Integer.parseInt(br.readLine());
   for(i=0;i<n;i++)
   {
     c  = (char)br.read();
    in.write(c);
    }
 }
}
  
   
