import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
class CalculatorDemo extends JFrame implements ActionListener
{
   JFrame F;
   JButton B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,Blus,Bminus,Bmul,Bdiv,Bcancel;
   JButton Bres,Bdot;
  JTextField T1;
  static  double a,b,res = 0;
   static  int operator;
 CalculatorDemo()
 {
   F = new JFrame("Calculator");
    B1 = new JButton("1"); 
   B2 = new JButton("2"); 
  B3 = new JButton("3");  
    B4 = new JButton("4");
     B5 = new JButton("5"); 
      B6 = new JButton("6"); 
    B7 = new JButton("7");  
   B8 = new JButton("8");
  B9 = new JButton("9");
  B0 = new JButton("0");
  Blus = new JButton("+");
  Bminus = new JButton("-");
   Bmul = new JButton("*");
   Bdiv = new JButton("/");
   Bcancel = new JButton("X");
     Bres = new JButton("=");
      Bdot = new JButton(".");

      T1 = new JTextField(30);
  
     T1.setBounds(30,40,280,30);

      B7.setBounds(40,100,50,40);
       B8.setBounds(110,100,50,40);
       B9.setBounds(180,100,50,40);
     Bdiv.setBounds(250,100,50,40);
   B4.setBounds(40,170,50,40);
   B5.setBounds(110,170,50,40);
    B6.setBounds(180,170,50,40);
   Bmul.setBounds(250,170,50,40);
    B1.setBounds(40,240,50,40);
     B2.setBounds(110,240,50,40);
     B3.setBounds(180,240,50,40);
     Bminus.setBounds(250,240,50,40);
    B0.setBounds(40,310,50,40);
   Bdot.setBounds(110,310,50,40);
      Bres.setBounds(180,310,50,40);
    Bcancel.setBounds(250,310,50,40);
  Blus.setBounds(40,350,50,40);

   F.add(B1);
  F.add(B2);
  F.add(B3);
  F.add(B4);
  F.add(B5);
  F.add(B6);
  F.add(B7);
  F.add(B8);
  F.add(B9);
  F.add(B0);
  F.add(Blus);
  F.add(Bminus);
  F.add(Bres);
  F.add(Bdiv);
  F.add(Bmul);
  F.add(Bdot);
  F.add(Bcancel);
  F.add(T1);

 
  F.setLayout(null);
  F.setSize(350,500);
  F.setVisible(true);
   F.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
   B1.addActionListener(this);
   B2.addActionListener(this);
   B3.addActionListener(this);
   B4.addActionListener(this);
   B5.addActionListener(this);
   B6.addActionListener(this);
   B7.addActionListener(this);
   B8.addActionListener(this);
   B9.addActionListener(this);
   B0.addActionListener(this);
   Bdot.addActionListener(this);
   Blus.addActionListener(this);
   Bminus.addActionListener(this);
   Bcancel.addActionListener(this);
   Bres.addActionListener(this);
   Bdiv.addActionListener(this);
   Bmul.addActionListener(this);


 }

 public void actionPerformed(ActionEvent e)
 {
  String msg = e.getActionCommand();
  if(msg.equals("1"))
   T1.setText(T1.getText().concat("1"));
  
  if(msg.equals("2"))
  T1.setText(T1.getText().concat("2"));

  if(msg.equals("3"))
  T1.setText(T1.getText().concat("3"));

  if(msg.equals("4"))
  T1.setText(T1.getText().concat("4"));

  if(msg.equals("5"))
  T1.setText(T1.getText().concat("5"));

  if(msg.equals("6"))
  T1.setText(T1.getText().concat("6"));

  if(msg.equals("7"))
  T1.setText(T1.getText().concat("7"));

  if(msg.equals("8"))
  T1.setText(T1.getText().concat("8"));

  if(msg.equals("9"))
  T1.setText(T1.getText().concat("9"));

  if(msg.equals("0"))
   T1.setText(T1.getText().concat("0"));
  
  if(msg.equals("."))
    T1.setText(T1.getText().concat("."));

  if(msg.equals("+"))
  {
    a = Double.parseDouble(T1.getText());
    operator =1;
 }
   if(msg.equals("-"))
  {
    a = Double.parseDouble(T1.getText());
    operator = 2; 
 }
   if(msg.equals("*"))
  { 
    a = Double.parseDouble(T1.getText());
    operator = 3;
 }
   if(msg.equals("/"))
  {
    a = Double.parseDouble(T1.getText());
   operator = 4;
 }
 
 if(msg.equals("="))
 { 
   b = Double.parseDouble(T1.getText());
   switch (operator)
   {
    case 1 : res = a+b;
               break;
    case 2: res = a-b;
            break;
    case 3: res = a*b;
             break;
    case 4:  res = a/b;
            break;
    default:  res = 0;
  }
     T1.setText(String.valueOf(res));
 }

  if(msg.equals("X"))
  {
    T1.setText("");
  }
}
  public static void main(String args[])
  {
    new CalculatorDemo();
  }
}
