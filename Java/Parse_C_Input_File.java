import java.io.*;
import java.util.*;
import java.lang.*;
class Parse_C_Input_File 
{
  public static void main(String args[])throws IOException,FileNotFoundException
  {
    int ch;
    FileInputStream fin = new FileInputStream("3.c");
    StringBuffer sb = new StringBuffer();
    do
    {
      ch = fin.read();
      sb.append((char)ch);
    }while(ch!=-1);  
    String str = sb.toString();
    String s1[] = str.split("\n");
   sb.setLength(0);
    for(int i=0;i<s1.length;i++)
    {
       if(s1[i].startsWith("char")|s1[i].startsWith("int")|s1[i].startsWith("float")&!s1[i].endsWith("()"))
       {   
           sb.append(s1[i]);
	     if(sb.indexOf("=")>0)
             {
              sb.delete(sb.indexOf("="),sb.length());
                 System.out.println(sb);
                sb.setLength(0);
             }
            if(sb.indexOf(";")>0)
            {
              sb.delete(sb.indexOf(";"),sb.length());
              System.out.println(sb);
               sb.setLength(0);
           }
       } 
   }
 }
}
