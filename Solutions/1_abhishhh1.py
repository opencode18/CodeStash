for i in range(int(input())):
	l=[int(x) for x in input().split()]
	for j in range(1,l[2]+1):
		if j%2==0:
			l[1]*=2
		else:
			l[0]*=2
	print(max(l[0],l[1])//min(l[0],l[1]))