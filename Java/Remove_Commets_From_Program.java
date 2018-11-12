import java.io.*;
import java.lang.*;
import java.util.*;
class Remove_Comments_From_Program
{
  public static void main(String args[])throws IOException,FileNotFoundException
  {
    System.out.println("Enter filename");
    Scanner in = new Scanner(System.in);
    String fname = in.nextLine();
    FileInputStream fin = new FileInputStream(fname);
    int ch;
     StringBuffer sb = new StringBuffer();
     do{
	ch = fin.read();
	sb.append((char)ch);
	}while(ch!=-1);

     String str = sb.toString();
     String s1[] = str.split("\n");
      System.out.println(s1.length);
   
     String str1 = str.substring(str.indexOf("/**")+2,str.indexOf("*/"));
      String str2 = str.substring(str.indexOf("//"));
   //  System.out.println(str1);
     //  System.out.println(str2);
   }
}
  /**
	sb.setLength(0);int i;
    for(i=0;i<str.length();i++)
    {
      if(str.charAt(i)=='/')
      {
        if(str.charAt(i)!='/')
 	{  
	  sb.append(str.charAt(i));
        }
     }   

    }
 
   System.out.println(sb.toString());
}
}
*/
