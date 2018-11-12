
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int cz=0,cp=0,cn=0;
        int a[] = new int[n];
        int k;
          double fn,fz;
        for(int arr_i=0; arr_i < n; arr_i++){
            a[arr_i] = in.nextInt();
            
        }
        for(int i = 0;i<n;i++)
            {
              if(a[i]>0)
                  cp++;
              else if(a[i]==0)
                  cz++;
              else
                  cn++;
      
        }
        k = a.length;
        double fp = cp/k;
        fn =(cn/k);
        fz=cz/k;
        System.out.println(fp);
         System.out.println(fn);
         System.out.println(fz);
//        System.out.println(k);
	
  //      System.out.println(cp);
   }
}
