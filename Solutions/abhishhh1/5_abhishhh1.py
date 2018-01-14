for i in range(int(input())):
	n=int(input())
	a=[int(x) for x in input().split()]
	b=int(input())
	c=[ ]
	fault=0
	for j in range(b):
		c.append(a[j])
		fault+=1
	temp=0
	for j in range(b,n):
		if a[j] not in c:
			temp%=b
			fault+=1
			c[temp]=a[j]
			temp+=1
	print(fault)
