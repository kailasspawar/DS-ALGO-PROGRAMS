import java.io.*;
import java.util.*;

class FileIODemo
{
  public static void main(String args[])throws IOException
  {
    
    int c;
    FileInputStream in = new FileInputStream("Student.txt");
    
     while( c =in.read()!=-1)
     {
        in.write(c);
     }
   
  
