t = int(input())
for _ in range(t):
    X, Y, P = map(int,input().split())
    X = X * (2 ** (int((P-1)/2) + 1))
    Y = Y * (2 ** int(P/2))
    print(int(max(X,Y) / min(X,Y)))