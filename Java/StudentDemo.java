import java.io.*;

class Student
{
   int rno;
    String name;
    float per;
    int m1,m2,m3,m4,m5;

  Student(int rno,String name,int m1,int m2,int m3,int m4,int m5)
  {
    this.rno=rno;
    this.name=name;
    this.m1=m1;
    this.m2=m2;
    this.m3=m3;
    this.m4=m4;
    this.m5=m5;
 }
 
 void display()
 {
   float per;
    per=(m1+m1+m3+m4+m5)/5;
   
   System.out.println(rno+"\t"+name+"\t"+m1+"\t"+m2+"\t"+m3+"\t"+m4+"\t"+m5+"\t"+per);
 }
 }

 class StudentDemo
 {
   public static void main(String args[])throws IOException
   {
     BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
      int rno,m1,m2,m3,m4,m5;
    String name;
 
   Student S[]=new Student[20];
  int i,n;
  System.out.println("How many Students?");
   n = Integer.parseInt(br.readLine());
  for(i=0;i<n;i++)
  {
    System.out.println("enter rno,name&marks of 5 subjects");
     rno = Integer.parseInt(br.readLine());
  name=br.readLine();
   m1 = Integer.parseInt(br.readLine());
     m2 = Integer.parseInt(br.readLine());  
  m3 = Integer.parseInt(br.readLine());  
  m4 = Integer.parseInt(br.readLine());
      m5 = Integer.parseInt(br.readLine());

    S[i]=new Student(rno,name,m1,m2,m3,m4,m5);
  }

  for(i=0;i<n;i++)
  {
    S[i].display();
  }

 }
}
