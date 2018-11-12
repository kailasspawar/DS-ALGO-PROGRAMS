import java.io.*;

class acptchar
 {
   public static void main(String args[])throws IOException
   {
     char ch;
           
      BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    ch=(char)br.read();
    
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    
         System.out.println(ch+" is vovel");
          else
         System.out.println(ch+"is consonent");
    }
}
