t = int(input())
while t:
    t -= 1
    arr = list(map(int, input().split()))
    money = 0
    while arr[0] > 0:
        money += min(arr[0]*arr[2], arr[1]*arr[2])
        arr[0] -= arr[1]
        arr[2] += arr[3]
    print(money)
