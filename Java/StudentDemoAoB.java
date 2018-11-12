import java.io.*;
import java.util.*;
class RollNoNotValidException extends Exception
{
  public String toString()
  {
    return("Invalid roll no");
  }
}
class NameNotValidException extends Exception
{
  public String toString()
  {
   return("Name Not Valid!");
  }
}

 class Student 
{
  int rno;
   String name,Class;
     int m1,m2,m3;
      int total;
   double per;
  Student(int rno,String name,String Class,int m1,int m2,int m3)
  {
   
      this.rno = rno;
          this.name = name;
            this.Class = Class;
         this.m1=m1;
           this.m2=m2;
                  this.m3=m3;
   } 
    
  public String toString()
  {
     total = m1+m2+m3;
        per = total/3;
    return(rno+"\t"+name+"\t"+Class+"\t"+total+"\t"+per);
  }
}

class StudentDemoAoB
{
  public static void main(String args[])throws IOException
  {
    int rno;
      String Class,name;
         int i,n,m1,m2,m3;
        
     BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      Student S[] = new Student[10];
    try
    {
     System.out.println("enter how many students?");
     n = Integer.parseInt(br.readLine());
     for(i=0;i<n;i++)
     { 
       System.out.println("Enter Rno,Name,Class&marks of 3 subjects");
       rno =  Integer.parseInt(br.readLine());
       if(rno < 10 )
          throw new RollNoNotValidException();
  
       name = br.readLine();
       if(name.length()!=4)
            throw new NameNotValidException();
       Class = br.readLine();
       m1 = Integer.parseInt(br.readLine());
       m2 = Integer.parseInt(br.readLine()); 
        m3 = Integer.parseInt(br.readLine());
       S[i] = new Student(rno,name,Class,m1,m2,m3);
     }
  
    System.out.println("The Student Details Are");
    for(i=0;i<n;i++)
    {
      System.out.println(S[i]);
    }
 }
   catch(Exception e)
    {
       System.out.println(e);
    }
   }
}
