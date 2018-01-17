for t in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    k=int(input())
    p = a = 0
    h = {}
    h[0] = -1
    for i in range(n):
        p += arr[i]
        if p-k in h:
            a = max(a,i-h[p-k])
        if p not in h:
            h[p] = i
    print(a)