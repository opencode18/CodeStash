t=int(input())
for i in range(t):
    word=""
    ans=""
    a=str(input())
    for j in a:
        if j=='.':
            if ans=="":
                ans=ans+word
            else:
                ans=word+'.'+ans
            word=""
        else:
            word=word+j
    if word!="":
        ans=word+'.'+ans
    print(ans)
