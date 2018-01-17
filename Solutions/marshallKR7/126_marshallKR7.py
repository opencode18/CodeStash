t=int(input())
for i in range(0,t):
    r,c=[int(x) for x in input().split()]
    total=r*c
    arr=[0]*total
    count=0
    for j in range(0,r):
        lst=[int(x) for x in input().split()]
        for i in range(0,len(lst)):
            arr[count]=lst[i]
            count=count+1
    l=len(arr)
    arr.sort()
    print(arr[int(l/2)])
    