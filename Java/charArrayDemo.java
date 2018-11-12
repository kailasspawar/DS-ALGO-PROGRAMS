import java.io.*;
class charArrayDemo
{
 public static void main(String args[])throws IOException
 {
   char c;
    int i,n;

 BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
   System.out.println("how many characters");
   n = Integer.parseInt(br.readLine());
   for(i=1;i<=n;i++)
   {
    a[i] = (char) br.read();
   }
   
  System.out.println("the enterd char are\n");
  for(i=1;i<=n;i++)
  {
   System.out.print(a[i]);
  }
}
}
