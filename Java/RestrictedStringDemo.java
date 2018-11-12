import java.io.*;
import java.util.*;

class RestrictedStringDemo
{
  public static void main(String args[])throws IOException
  {
    String str;
     int chrcnt = 0,nocnt =0,splchr=0,arithcnt=0;
    int i,n;
    Scanner in = new Scanner(System.in);
   
    System.out.println("enter the String");
    str = in.nextLine();
    for(i=0;i<str.length();i++)
    {
       
       if(str.charAt(i) >= 'a'|| str.charAt(i) >='A'&& str.charAt(i) <='z'||str.charAt(i) <='Z')
       {
            chrcnt++;
       }
    }
     if(chrcnt!=3)
     {  
      System.out.println("Invalid String");
     }
  }
}
