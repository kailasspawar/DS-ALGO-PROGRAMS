import java.io.*;
class Array_of_Strings_Demo
{
	public static void main(String args[])throws IOException
	{
                 int i;
		String str[] = new String[20];
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		System.out.println("How many strings");
		int n = Integer.parseInt(br.readLine());
		for(i=0;i<n;i++)
		{
		  str[i] = br.readLine();
		}
	
		for(i=0;i<n;i++)
		{
		  System.out.println("Strings are:" +str[i]);
		}
	}
}
