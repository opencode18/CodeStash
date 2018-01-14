for i in range(int(input())):
    a=[int(x) for x in input().split()]
    print(((1<<a[2])-1)^((1<<(a[1]-1))-1)^a[0])
