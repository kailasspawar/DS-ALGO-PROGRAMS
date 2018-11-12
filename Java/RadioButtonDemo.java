import java.io.*;
import java.util.*;
class Student 
{
  int rno;
   String name,Class;
     int marks[] = new int marks[10];
    int total,double per;
  
  Student(int rno,String name,String Class,int marks[])
  {
   
      this.rno = rno;
          this.name = name;
            this.Class = Class;
                  this.marks[]=marks[];
 }
   n = marks.length();
  for(int i=0;i<n;i++)
  {
   total+=marks[i];
  }

  per = marks/n;
  public String toString()
  {
    return(rno+"\t"+name+"\t"+Class+"\t"+total+"\t"+per);
  }
}

class 

