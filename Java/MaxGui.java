import java.io.*;

class MaxGui extends JFrame implements ActionListener
{
  
    JButton B1,B2;
      JFrame F = new JFrame("maximum");
     JextField T1,T2,T3;
     JLabel L1,L2;
    
    MaxGui()
    {
       L1 = new JLabel("Enter First No");
            F.add(L1);
       T1 = new JTextField(20);
           F.add(T1);
      L2 = new JLabel("Enter Second No");
            F.add(L2);
       T2 = new JTextField(20);
           F.add(T2);

       T3 = new JTextField(20);

    
