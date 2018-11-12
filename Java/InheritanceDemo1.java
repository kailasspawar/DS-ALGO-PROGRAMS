import java.io.*;
import java.util.*;


class AreaOfTriangle 
{
   int rad;
     int len,height;
   Scanner in = new Scanner(System.in);

   void getArea() 
   {
     System.out.println("enter the radius");
        rad = in.nextInt();
     System.out.println("enter length and height");
     len = in.nextInt();
         height = in.nextInt();
  }
 
   
    double DisplayArea()
    {
       return(3.14*rad*rad);
    }

 }

class AreaOfRectangle extends AreaOfTriangle
{
    
    int display()
    {
       return(len*height);
     
    }
 
}

class InheritanceDemo1
{
   public static void main(String args[]) throws IOException
   {
     AreaOfRectangle A = new AreaOfRectangle();

       A.getArea();
     System.out.println("Area of triangle is:  "+A.DisplayArea());
         System.out.println("Area of rectangle is:  "+A.display());
   }
}       
    

