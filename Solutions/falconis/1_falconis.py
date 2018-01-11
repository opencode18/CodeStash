t = int(input())
a = 0
while a < t:
    x, y, p = map(int,input().split(" "))
    b = 1
    while b <= p:
        if(b%2 == 0):
            y = y*2
        else:
            x = x*2
        b += 1
    ma = max(x,y)
    mi = min(x,y)
    print(int(ma/mi)) 
    a = a + 1