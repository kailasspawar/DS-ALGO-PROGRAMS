import java.io.*;
import java.util.*;
class FindPatterninMatrix
{
	public static char [] findPatt(char a[][],char p[])
	{
		int m=0,i,j,k=0;int cnt = 0;
		char b[] = new char[5];
          
		for(i=0;i<4;i++)
		{     
                 
		        for(j=0;j<4;j++)
			{
                             System.out.println("Hello");
				if(p[m]==a[i][j])
				{
				     System.out.println("Hello");
 					cnt++;
			           //		m++;
			    //		b[k++] = a[i][j];
				}
                             
			}
		}
		System.out.println(cnt);
		return (b);
	}
	public static void main(String args[])throws Exception
	{ 
                int i,j;
		char arr[][]= new char [10][10];
		char par[] = new char[4];
		char p[] = {'a'};
		 Scanner in = new Scanner(System.in);
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the 4X4 matrix");
		for( i=0;i<4;i++)
		    for( j=0;j<4;j++)
				arr[i][j] = (char)br.read();


		  par = findPatt(arr,p);
	//	for(int k=0;k<4;k++)
	//		System.out.println(p[k]);
	}
}
