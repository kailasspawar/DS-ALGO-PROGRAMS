import java.io.*;
class DeleteCharsFromStr
{
 public static void main(String args[]) 
 {
  StringBuffer sb = new StringBuffer();
  sb.append("klrcshmfkjshpsj");
  String str = "hrjps";

  int j=0;
//  int len = ss.length();
//  System.out.println(len);
  System.out.println(sb);
  System.out.println(str);
  for(int i=0;i<str.length();i++)
  {
    String ss = sb.toString();
     if(ss.indexOf(str.charAt(i))>0)
      sb.deleteCharAt(ss.indexOf(str.charAt(i)));
 }

 System.out.println(sb);
 }
}
