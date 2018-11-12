/*
<HTML>
<BODY>
<APPLET CODE="GgeetApplet.class" WIDTH="400" HEIGHT="400">
<PARAM NAME="Uname" VALUE="XYZ">
</APPLET>
</BODY>
</HTML>
*/

import java.awt.*;
import java.applet.*;
public class GreetApplet extends Applet
{
 String name;
  public void init()
  {
   name=getParameter("Uname");
  }
 public void paint(Graphics g)
 {
  String msg="Hello"+name;
   g.drawString(msg,10,100);
 }
}
