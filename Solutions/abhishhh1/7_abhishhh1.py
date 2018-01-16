for i in range(int(input())):
	s=input().split(".")
	a=[ ]
	for j in range(len(s)-1,-1,-1):
		a.append(s[j])
	print(".".join(a))