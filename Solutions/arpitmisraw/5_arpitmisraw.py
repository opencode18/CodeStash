t = int(input())

for _ in range(t):
    count = 0
    n = int(input())
    ls = list(map(int,input().split()))
    mem = int(input())
    cache = []
    for i in range(0,n):
        ele = ls[i]
        if len(cache)>=mem:
            if ele in cache:
                del cache[cache.index(ele)]
            else:
                del cache[0]
                count += 1
        else:
            if ele in cache:
                del cache[cache.index(ele)]
            else:
                count += 1
        cache.append(ele)
    print(count)
            