t=int(input())
while(t):
    n=int(input())
    if(n%2==0):
        for i in range(n):
            for j in range(n):
                print("-1", end= ' ')
            print()
    else:
        for i in range (n):
            for j in range(n):
                if(i!=j):
                    print("1", end=' ')
                else:
                    print("-1", end=' ')
                print()
    t-=1
