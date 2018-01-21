n=int(input())
a=[int(x) for x in input().split()]
c=[]
for i in range(n):
    b=a[i:n+1]
    b.sort()
    c=b.index(a[i])
    print(c,end=" ")
