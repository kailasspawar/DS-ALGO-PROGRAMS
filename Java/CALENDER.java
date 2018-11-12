import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        int m = Integer.parseInt(month);
        String day = in.next();
        int d = Integer.parseInt(day);
        String year = in.next();
        int y = Integer.parseInt(year);
      Calendar c = Calendar.getInstance();
            c.set(m,d,y);
           int dow = c.get(Calendar.DAY_OF_WEEK);
           //String str = String.valueOf(dow);
           if(dow==1)
               System.out.println("SUNDAY");
           else if(dow==2)
               System.out.println("MONDAY");
           else if(dow==3)
               System.out.println("THUESDAY");
           else if(dow==4)
               System.out.println("WEDNESDAY");
           else if(dow==5)
               System.out.println("THURSDAY");
           else if(dow==6)
               System.out.println("FRIDAY");
           else if (dow==7)
               System.out.println("SATURDAY");
           

    }
}
         
