import java.util.*;
class Stack_demo
{
 public static void main(String args[])
 {
   Stack st = new Stack();
   int i;
   Scanner in = new Scanner(System.in);
   System.out.println("How many elements?");
   int n = in.nextInt();
   for(i=1;i<=n;i++)
   {
     int ele = in.nextInt();
     st.push(ele);
   }
   while(!st.empty())
    System.out.println(st.pop());

  System.out.println("Enter Strings");
  for(i=1;i<n;i++)
  {
    String str = in.nextLine();
    st.push(str);
  }
 while(!st.empty())
  System.out.println(st.pop());
 }   
}
