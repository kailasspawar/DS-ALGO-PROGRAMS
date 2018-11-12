import java.io.*;
import java.util.*;
 class StrangeCnt {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int i;int count = 3;
        for(i=1;i<100000;i++)
            {
              if(i==t)
                  System.out.println(count);
              else if(count==1)
                 count = i*2;
              else
                  count--;
        }
    }       
}

