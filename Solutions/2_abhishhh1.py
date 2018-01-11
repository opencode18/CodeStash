a=[int(x) for x in input().split()]
b=[x for x in a]
b.sort()
for i in range(len(a)):
    c=b.index(a[i])+1
    d=b.count(a[i])
    s=(c*d+d*(d-1)/2)/d
    print(format(s,'.1f'),end=" ")
    
    
