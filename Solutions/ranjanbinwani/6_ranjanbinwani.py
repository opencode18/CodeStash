t=int(input())
while t!=0:
 
	n,l,r = map(int,input().split())
	l-=1
	r-=1
	for i in range(l,r+1):
		 n=(n|(1<<i))
	print(n)
	t-=1	
