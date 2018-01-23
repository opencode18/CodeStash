import sys
a = []
i = 0
while True:
    input_  = sys.stdin.readline()
    a.append(input_)
    if input_ == '':
        break
i = 0
for k in a:
    if '//' not in k:
        a[i] = k.replace('->','.')
    else:
        c = a[i].split('//')
        c[0] = c[0].replace('->','.')
        a[i] = ""
        for s in c:
            a[i]=a[i]+ "//"+s
        a[i] = a[i][2:]
    i = i+1
print '\n'.join(a)