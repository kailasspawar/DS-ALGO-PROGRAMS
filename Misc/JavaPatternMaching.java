import java.util.regex.Matcher;
import java.util.regex.Pattern;
class JavaPatternMaching
{
 static boolean check(String str)
  {
   String regex = "10+1";
  Pattern p = Pattern.compile(regex);
  Matcher m = p.matcher(str);
  while(m.find())
   return false;

 return true;
  }
  public static void main(String args[])
  {
   
   String str = "00111111000";
   System.out.println(check(str) ? "Yes" : "No");
  }
}
