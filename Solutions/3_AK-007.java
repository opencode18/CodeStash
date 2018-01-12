import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k;
		while(n>0)
		{
			k=sc.nextInt();
			System.out.println(k/2);
			n--;
		}
	}
}