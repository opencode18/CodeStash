t=int(input())
while t!=0:
	r,g = map(int,input().split())
	print("%.6f" % (r/(r+g)))
	t-=1
