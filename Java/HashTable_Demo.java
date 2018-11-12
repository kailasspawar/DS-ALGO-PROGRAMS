import java.util.*;
class HashTable_Demo
{
 public static void main(String args[])
 {
   String rno;
   String name;
   Hashtable hs = new Hashtable();
   
   hs.put("111","prem");
   hs.put("222","raj");
   hs.put("333","sai");
   hs.put("444","om");
   hs.put("555","diksha");
   hs.put("666","pinu");
  Set set = hs.keySet();
  Iterator it = set.iterator();
  while(it.hasNext())
  {
    rno = (String)it.next();
    System.out.println(rno+ ":"+hs.get(rno));
  }
 }
}
