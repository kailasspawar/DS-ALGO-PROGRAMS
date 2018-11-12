import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
class SumofTwonosGui extends JFrame implements ActionListener
{
 
    JLabel L1,L2,L3;
    JTextField T1,T2,T3;
     JButton B1,B2;
   int a,b,res;
  
  SumofTwonosGui()
 {
   JFrame F = new JFrame("SumOf Two nos");

  F.setLayout(new GridLayout(4,2));
  L1= new JLabel("First No");
  F.add(L1);
  T1=new JTextField(20);
      F.add(T1);
  L2=new JLabel ("second no");
    F.add(L2);
  T2= new JTextField(30);
    F.add(T2);
  L3= new JLabel ("Sum is");
    F.add(L3);
  T3= new JTextField(30);
    F.add(T3);
  
  B1=new JButton("Submit");
    F.add(B1);
  B2= new JButton("reset");
     F.add(B2);

  B1.addActionListener(this);
  B2.addActionListener(this);

  F.setSize(400,400);
    F.setVisible(true);
  F.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 }

 public void actionPerformed(ActionEvent e)
 {
   String msg = e.getActionCommand();
    if(msg.equals("Submit"))
    {
      a = Integer.parseInt(T1.getText());
      b = Integer.parseInt(T2.getText());

      res = a + b;
    T3.setText(String.valueOf(res));
 }
 
  else if(msg.equals("reset"))
  {
     T1.setText("");
     T2.setText("");
     T3.setText("");
  }
 }

public static void main(String args[])
{
  new SumofTwonosGui();
}

} 
