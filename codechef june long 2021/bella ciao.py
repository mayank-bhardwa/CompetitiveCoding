from math import ceil
t = int(input())
while t:
    t -= 1
    arr = list(map(int, input().split()))
    n = arr[0] // arr[1]
    money = arr[2] * n * arr[1]
    money += arr[3] * arr[1] * n * (n-1) * 0.5
    if arr[0] % arr[1] == 0:
        print(int(money))
    else:
        k = arr[0] % arr[1]
        money += k*arr[2]
        money += arr[3]*n*k
        print(int(money))
