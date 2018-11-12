import java.util.*;
class CountTheStringsOccurExactly2Times
{
  public static void main(String args[])
  {
    String str[] = {"love","dove","hate","love","dove","hate","love","move","move"};
      int n = str.length;
    Hashtable<String,Integer> ht = new Hashtable<String,Integer>();

    for(int i = 0;i<n;i++)
    {
      if(ht.containsKey(str[i]))
       {
         ht.put(str[i],ht.get(str[i])+1);
       }
       else
       {
         ht.put(str[i],1);
       }
    }
   Set s = ht.entrySet();
          
        // printing set entries
        System.out.println("set entries: " + s);
  int res = 0;
  for(int i = 0;i<ht.size()-1;i++)
   if(ht.containsValue(2))
    res++;
  System.out.println(res);
}
}
