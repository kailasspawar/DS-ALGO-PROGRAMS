import java.io.*;
import java.lang.*;
import java.util.*;
class Parse_Input_File_demo
{ 
 public  static  void toCheck(String str)
  {
     int cntd=0,cntw=0;
    for(int i=0;i<str.length();i++)
    {
      if(Character.isDigit(str.charAt(i)))
        cntd ++;
     
      if(Character.isLetter(str.charAt(i)))
        cntw ++;
    }
    if(cntd == str.length())
      System.out.println("Numeric Data");
    else if(cntw == str.length())
      System.out.println("Word");
    else
      System.out.println("AlphaNumeric");
  }
 public static boolean isDelim(char c)
 {
   switch(c)
   {
    case ':':
    case ',':
    case '.':
    case ';':
    case ' ': return(true);
              
    default : return(false);
                
   }
 }
/* public static void toDoSo(String s1)
 {
   toCheck(s1);
 }*/  
 public static void main(String args[])throws IOException,FileNotFoundException
  {
   FileInputStream fin = new FileInputStream("1.txt");
    int ch;
   StringBuffer sb = new StringBuffer();
   Scanner in = new Scanner(System.in);
   StringBuilder sbr = new StringBuilder(); 
  do
   {
     ch = fin.read();
     sb.append((char)ch);
   }while(ch!=-1);
//   System.out.println(isDelim('w')); 
   String str = sb.toString();
   int i; 
   for(i=0;i<str.length();i++)
   {
      if(!isDelim(str.charAt(i)))
      {
       sbr.append(str.charAt(i));
      }
      if(isDelim(str.charAt(i)))
      {
        String s = sbr.toString();
           toCheck(s); 
      // sbr.delete(0, sbr.length());
      sbr.setLength(0);
         
      }
   }

  }
}
