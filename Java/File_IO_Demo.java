import java.io.*;
class File_IO_Demo
{
  public static void main(String args[])throws IOException,FileNotFoundException
  {
    FileInputStream fin = new FileInputStream(args[0]);
     StringBuilder sb = new StringBuilder();
     int c;int i;
     String str;
    do
    {
      c = fin.read();
       sb.append((char)c);
    }while(c!=-1);
    str = sb.toString();
   String sarray[] = str.split("\n");
   for(int j=0;j<sarray.length;j++)
   {
     if((sarray[j].contains("Maharashtra"))==true & (sarray[j].contains("M.Sc.(Tech)"))==true)
     {
        String ss[] = sarray[j].split(",");
        for(int k=0;k<1;k++)
           System.out.println(ss[1]);
     }
  }

