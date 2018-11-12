import java.io.*;
import java.util.*;

class StringDemo
{
   public static void main(String args[])throws IOException
   {
     String str,str1,str3,str2,str4;
  
      Scanner in = new Scanner(System.in);
    
      System.out.println("Enter the First String");
      str = in.nextLine();
 
      System.out.println("Enter the Second String");
         str1 = in.nextLine();
      int len = str.length();
       str2 = str.concat(str1);
     int k = str.indexOf("love");
           str4 = str.substring(2,12);
             str3= str1.replace('i','w');
//      str3 = str + str1;
 
      System.out.println("The First String You Enterd Is\n"+str);
     System.out.println("The Second String You Enterd Is\n"+str1);
      System.out.println("The Concatinated String  Is\n"+str2);
        System.out.println("The substring is\n"+str4);
      System.out.println("The Length Of First String You Enterd Is: "+len);
        System.out.println("After Replacement the string is\n"+str3);
          System.out.println("The sting found at index: "+k);
   }
}
