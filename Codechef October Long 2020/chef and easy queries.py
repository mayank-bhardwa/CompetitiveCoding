for _ in range(int(input())):
    n,k=map(int,input().split())
    q = list(map(int,input().split()))
    days = 0
    p = 0
    for i in q :
        days += 1
        i = i + p 
        if(i<k):
            days -= 1 
            break
        i -= k
        p = i
    print(days + p//k + 1)            