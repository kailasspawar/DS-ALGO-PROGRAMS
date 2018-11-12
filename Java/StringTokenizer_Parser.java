import java.io.*;
import java.util.*;
class StringTokenizer_Parser
{
 public static void main(String args[])throws IOException,FileNotFoundException
 {
   FileInputStream fin = new FileInputStream("4.txt");
    int ch;
   StringBuilder sb = new StringBuilder();
   do
   {
     ch = fin.read();
     sb.append((char)ch);
   }while(ch!=-1);
  
  String str = sb.toString();
  StringTokenizer st = new StringTokenizer(str,"\n,' '");
  while(st.hasMoreTokens())
  {
   System.out.println(st.nextToken());
  }
}
}
