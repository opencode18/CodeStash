arr = list(map(int,input().split()))
n = len(arr)
ranks = []
for x in range(0,n):
    ranks.append(0)
for x in range(0,n):
    rep = 1
    rank = 1
    for y in range(0,n):
        if arr[y] < arr[x] and y != x:
            rank += 1
        if arr[y] == arr[x] and y!= x:
            rep += 1

    rrank = (rank*rep + rep*(rep-1)/2)/rep
    ranks[x] = rrank

for x in range(0,n):
    print(ranks[x],end= " ")