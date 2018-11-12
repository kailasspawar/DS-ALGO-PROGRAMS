import java.io.*;
import java.util.*;
class FileConcatination
{
 public static void main(String args[])throws IOException,FileNotFoundException
 { 
    int ch,ch1;
    FileInputStream fin = new FileInputStream("pp1.c");
    FileOutputStream fout = new FileOutputStream("pp1.c");
    FileInputStream fin1 = new FileInputStream("pp2.c");
    StringBuilder sb = new StringBuilder();
    StringBuilder sb1 = new StringBuilder();

   do 
   {
      ch = fin.read();
      sb.append((char)ch);
    }while(ch!=-1);
   
   do
   {
     ch1 = fin1.read();
     sb1.append((char)ch1);
   }while(ch1!=-1);
   
  String str1[] = sb.split("\n");
  String  str2[] = sb1.split("\n");
   for(int i=0;i<str2.length;i++)
   { 
     if(str1[i] == str2[i])
         break;

     else
       fout.write(str2[i]);
   } 
   fin1.close();
   do
   {
     ch = fin.read();
       System.out.println((char)ch);
   }while(ch!=-1);

   }
}
    
