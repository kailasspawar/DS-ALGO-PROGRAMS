import java.io.*;
class Teacher
{
    int tno; 
     String name,subject;
  
   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   void Accept() throws IOException
   {
   tno = Integer.parseInt(br.readLine());
     name = br.readLine();
     subject= br.readLine();
   }

  void Display()
  {
    System.out.println("tno"+"\t"+"name"+"\t"+"subject");
   System.out.println(tno+"\t"+name+"\t"+subject);
  }
}

class TeacherDemo
{
  public static void main(String args[])throws IOException
  {
     Teacher T[]=new Teacher[20];
    int n,i;
   System.out.println("How many teachers?");
   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   n=Integer.parseInt(br.readLine());
   for( i=0;i<n;i++)
   {
     T[i].Accept();
   }
  
   for(i=0;i<n;i++)
   {
    T[i].Display();
   }
  }
}


    
