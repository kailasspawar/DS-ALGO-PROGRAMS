import java.io.*;

class CheckifGivenStringisRotationOfAnother
{
 
  static boolean check(String s1,String s2)
  {
    
     return ((s1+s1).indexOf(s2)>=1);
  }

  public static void main(String args[]) throws IOException
  {
         String str1 = "AACD";
        String str2 = "ACDA";

      if(check(str1,str2))
       System.out.println("Yes");
      else
       System.out.println("NO");
  }
}
       
