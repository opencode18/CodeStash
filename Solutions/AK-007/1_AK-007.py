t=int(input())
while t>0 :
	x,y,p=map(int,input().split())
	while p>0:
		if p%2==0 :
			y*=2
		else:
			x*=2
		p=p-1
	maxm=max(x,y)
	minm=min(x,y)
	ans=int(maxm/minm)
	print(ans)
	t=t-1