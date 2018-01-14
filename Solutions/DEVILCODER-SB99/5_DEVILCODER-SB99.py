p=int(input())
for i in range(p):
	n=int(input())
	a=list(map(int,input().split()))
	b=int(input())
	array=[ ]
	count=0
	sum=0
	for j in range(b):
		array.append(a[j])
		count+=1
	for j in range(b,n):
		if a[j] not in array:
			array[sum]=a[j]
			sum%=b
			sum+=1
			count+=1
	print(count)