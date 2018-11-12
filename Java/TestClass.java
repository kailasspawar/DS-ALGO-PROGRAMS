import java.io.*;
import java.util.*;


class TestClass {
    public static void main(String args[] ) throws Exception {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
         int n = Integer.parseInt(br.readLine());
         String s = br.readLine();
         System.out.println((n*2));
         System.out.println(s);
    }
}

