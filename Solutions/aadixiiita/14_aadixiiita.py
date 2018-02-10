t=int(input())
for i in range(0,t):
    n=int(input())
    add=0
    for i in range (1,n):
        if(n%i==0):
            add=add+i
    print(add)