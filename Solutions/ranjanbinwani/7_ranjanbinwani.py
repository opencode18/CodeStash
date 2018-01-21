t=int(input())
while t!=0:
	s=input()
	a=[]
	a = s.split('.')
	a.reverse()
	print(".".join(a))

	t-=1
