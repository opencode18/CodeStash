m=[int(i) for i in input().split()]
n=[i for i in m]
n.sort()
for j in range(len(m)):
    a=n.index(m[j])+1
    b=n.count(m[j])
    ans=(a*b+b*(b-1)/2)/b
    print(ans,end=" ")
