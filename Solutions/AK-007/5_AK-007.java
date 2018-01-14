import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		
		int t=sc.nextInt();
		
		while(t>0)
		{
			int n=sc.nextInt();
			int[] a=new int[n];
			for(int i=0;i<n;i++)
			{
			   a[i]=sc.nextInt();
			}
			int cap=sc.nextInt();
			solve(a,n,cap);
			t--;
		}
	}
	public static void solve(int a[],int n,int cap)
	{
		Set<Integer> s=new HashSet<Integer>();
		Map<Integer,Integer> map=new HashMap<Integer,Integer>(); 
		
		int pg=0;
		
		for(int i=0;i<n;i++)
		{
			if(s.size()<cap)
			{
				if(!s.contains(a[i]))
				{
                   s.add(a[i]);
                   pg++;
				}
				map.put(a[i],i);
			}
			else
			{
				if(!s.contains(a[i]))
				{
                 int m =Integer.MAX_VALUE, val=Integer.MIN_VALUE;
                 for (int j:s)
                   {
                     if (map.get(j) < m)
                       {
                        m = map.get(j);
                        val = j;
                       }
                   }
                s.remove(val);
                s.add(a[i]);
                pg++;
				}
				map.put(a[i],i);
			}
		}
		System.out.println(pg);
	}
}