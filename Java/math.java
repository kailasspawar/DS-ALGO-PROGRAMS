import java.io.*;
class math
{
 

    public static void main(String[] args)
    {
            String str;int len;
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++)
            {  
                String s1=sc.next();
                int x=sc.nextInt();
                 len =  (int) Math.log10(x) + 1;
                  if(len==3)
                    System.out.printf("%-15s%d\n",s1,x);
                  else
                      System.out.printf("%-15s0%d\n",s1,x);
                    
            }
            System.out.println("================================");

    }
}

