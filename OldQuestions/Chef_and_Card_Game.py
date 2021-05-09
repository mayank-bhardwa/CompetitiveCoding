# cook your dish here
for _ in range(int(input())):
    n=int(input())
    x=y=0
    for _ in range(n):
        A,B=input().split()
        a=b=0
        for i in A:
            a+=int(i)
        for i in B:
            b+=int(i)
        
        if(a>b):
            x+=1    
        elif(a<b):
            y+=1
        else:
            x+=1
            y+=1
    if(x>y):
        print(0,x)
    elif(x<y):
        print(1,y)
    else:
        print(2,x)