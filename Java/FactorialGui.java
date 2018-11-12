import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class FactorialGui extends JFrame implements ActionListener
{

    JTextField T1,T2;
    JLabel L1,L2;
      JButton B1,B2;
    int no,fact=1;
     FactorialGui()
    {
       JFrame F = new JFrame("FACTORIAL");
        F.setLayout(new GridLayout(4,2));
        L1= new JLabel("enter no");
           F.add(L1);
         T1=new JTextField(20);
            F.add(T1);
         L2 = new JLabel("the factorial is");
            F.add(L2);
         T2 = new JTextField(20);
           F.add(T2);  
           B1= new JButton("Submit");
       F.add(B1);
        B2= new JButton("Reset");
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
      no = Integer.parseInt(T1.getText());
  
       for(int i=1;i<no;i++)
       {
          fact*=i;
       }
     T2.setText(String.valueOf(fact));
   }
   
      else if(msg.equals("Reset"))
      {
        T1.setText("");
         T2.setText("");
      }
    }

  public static void main(String args[])
  {
     new  FactorialGui();
  }

}
