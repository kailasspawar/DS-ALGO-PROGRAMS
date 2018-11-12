abstract class prem
{
 int k =100;
  abstract int function(int a);
}
class sub extends prem
{
 int function(int k)
 {
  return k;
 }
}
class simple
{
    static int a = 10;
  public static void main(String args[])
  {
       int a = 20;
     sub s = new sub();
     System.out.println(s.function(100));
    System.out.println(a);
    System.out.println(simple.a);
  }
}
