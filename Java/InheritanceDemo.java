import java.io.*;

class Student
{
  int rno;
    String name;
  Student(int rno,String name)
  {
    this.rno=rno;
    this.name=name;
  
 }
 
}

class Result extends Student
{
  int m1,m2,m3;
    double per;
   
  Result(int rno,String name,int m1,int m2,int m3)
  {
      super(rno,name);
     this.m1=m1;
      this.m2=m2;
         this.m3=m3;
  }

  void Display()
  {
    per=(m1+m2+m3)/3;
    System.out.println(rno+"\t"+name+"\t"+m1+"\t"+m2+"\t"+m3+"\t"+per);
  }
}

class InheritanceDemo
{
  public static void main(String args[])throws IOException
   {
    int rno,m1,m2,m3,i,n;
       String name;
      Result R[]=new Result[20];
      BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
      System.out.println("how many Students?");
        n= Integer.parseInt(br.readLine());

      for(i=0;i<n;i++)
      {
          System.out.println("enter rno,name,marks of 3 subjects");
           rno = Integer.parseInt(br.readLine());
             name=br.readLine();
              m1 = Integer.parseInt(br.readLine());
            m2 = Integer.parseInt(br.readLine());
         m3 = Integer.parseInt(br.readLine());
       R[i]=new Result(rno,name,m1,m2,m3);
       }
      
       for(i=0;i<n;i++)
       {
          R[i].Display();
       }
    }
  }
