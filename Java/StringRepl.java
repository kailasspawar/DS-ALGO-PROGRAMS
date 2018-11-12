import java.io.*;

class StringRepl
{
 public static void main(String args[])throws IOException
 {
    StringBuffer sb = new StringBuilder("premnprbdngpsq");
     int n = sb.length();
     int i, j;
  //  System.out.println(s.charAt(4));
    for( i=0;i<n;i++)
    {
     for( j=i+1;j<n;j++)
      {
         if(sb.charAt(i)==sb.charAt(j))
          sb.setCharAt(sb.indexOf(sb.charAt(i)),sb.CharAt(i+1));
      }
   }

   System.out.println("The string is :"+sb);
  }
}
