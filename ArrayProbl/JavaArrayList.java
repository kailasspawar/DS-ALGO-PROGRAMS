import java.util.*;
class JavaArrayList
{
  public static void main(String args[])
  {
    ArrayList A = new ArrayList();
    for(int i = 1;i<10;i++)
     A.add(i);

    for(int i = 0;i<A.size();i++)
     System.out.println(A.get(i));
   }
}
