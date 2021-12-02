#obtain the sum
t=int(input())
while(t):
    n,s=map(int, input.split(' '))
    ans=0
    smm=(n*(n+1))//2
    if(smm>s):
        ans=smm-s

    if(ans>=1 and ans<=n):
        print(ans)
    else:
        print("-1")
    t-=1