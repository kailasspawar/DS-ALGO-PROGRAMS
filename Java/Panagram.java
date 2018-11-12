//checking if string is panagram or not 

import java.io.*;
class Panagram 
{
  public static void main(String args[])throws IOException
  {
    String str1,str;
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int count=0,cnt=0;
    System.out.println("Enter the string"); 
    str1 = br.readLine();
    str = str1.toUpperCase();
    int n = str1.length();
    for(int i=0,j=1;i<n&&j<n;i++,j++)
    {   
 	   
        if(str.charAt(i)!=str.charAt(i+1))
        {
           count++;
        }
   }
    
     System.out.println(count);
   if(count==26)
     System.out.println("panagram");
   else
     System.out.println("not panagram");
}
}
