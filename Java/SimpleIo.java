import java.io.*;
import java.util.Scanner;
class Base
{
	int x;
	int y;
   Base(int a,int b)
   {
	   this.x = a;
	   this.y = b;
   }
   void display()
   {
	   System.out.println("Base X = "+x);
	   System.out.println("Base Y = "+y);
   }
}
class Derived extends Base
{
	int z ;
   Derived(int a,int b,int c)
   {
	   super(a,b);
	 this.z = c;
   }
  void display()
  {
	   System.out.println("Derived X = "+x);
	   System.out.println("Derived Y = "+y);
	   System.out.println("Derived Z = "+z);
  }
}

public class  SimpleIo
{
	public static void main(String args[])throws IOException 
	{
		Scanner in = new Scanner(System.in);
                String str ;
//		str = in.nextLine();
//	   System.out.println("Entered string is "+str);
          Base d = new Derived(10,20,30);
	  
	  d.display();
	}
}
		
