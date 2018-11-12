import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Practice {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String time = in.next();
        String str[] = time.split(":"); 
        String n = str[0];
        String ss = str[2].replace("PM","");
        String sa = str[2].replace("AM","");
        if(time.contains("PM"))
            {
              switch(n)
                  {
                   case "01": System.out.println("13"+":"+str[1]+":"+ss); 
                            break;
                     case "02": System.out.println("14"+":"+str[1]+":"+ss); 
                             break;
                     case "03": System.out.println("15"+":"+str[1]+":"+ss); 
                             break;
                     case "04": System.out.println("16"+":"+str[1]+":"+ss); 
                             break;
                     case "05": System.out.println("17"+":"+str[1]+":"+ss); 
                             break;
                     case "06": System.out.println("18"+":"+str[1]+":"+ss); 
                             break;
                     case "07": System.out.println("19"+":"+str[1]+":"+ss); 
                             break;
                     case "08": System.out.println("20"+":"+str[1]+":"+ss); 
                             break;
                     case "09": System.out.println("21"+":"+str[1]+":"+ss); 
                             break;
                      case "10": System.out.println("22"+":"+str[1]+":"+ss); 
                             break;
                     case "11": System.out.println("23"+":"+str[1]+":"+ss); 
                             break;
                     case "12": System.out.println("12"+":"+str[1]+":"+ss); 
                             break;
                     
                     
                  }
        }
                else if(time.contains("AM"))
                    {
                      if (str[0]=="12")
                        System.out.println("00"+":"+str[1]+":"+sa); 
                      else
                        {
                          String sk = time.replace("AM","");
                          System.out.println(sk);
                      }
           
                }
       
    }
}
/*import java.io.*;
class Practice
{
  public static void main(String args[])throws IOException
  {
     String str;
   System.out.println("Hello"+"Friends"+":");

  }
 */
