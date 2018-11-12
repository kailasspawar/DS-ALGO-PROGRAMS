import java.io.*;
import java.util.*;
class Reading_Input_File_Demo
{
  public static void main(String args[])throws IOException,FileNotFoundException
  {
   // System .out.println("Enter Filename");
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   int ch ;
    int rno,age;String name;
  //  String fname = in.nextLine();
    FileInputStream fin = new FileInputStream("prem.txt");
    PrintWriter pw = new PrintWriter("prem.txt");
   System.out.println("How many Records");
   int n = Integer.parseInt(br.readLine());
    System.out.println("Enter rno,name,age of Student");
     StringBuffer sb = new StringBuffer();
   for(int i=1;i<=n;i++)
   {
     rno = Integer.parseInt(br.readLine());
      name = br.readLine();
     age = Integer.parseInt(br.readLine());
    pw.write(rno);
     pw.write(name);
     pw.write(age);
   }
  pw.close();
  do{
     ch = fin.read();
     System.out.println((char)ch);
    sb.append((char)ch);
     
  }while(ch!=-1);
 fin.close();
 String str = sb.toString();
 System.out.println(str);
}
}
   
  
  
  
