# cook your dish here
from math import ceil
n = int(input())
while n:
    n -= 1
    arr = list(map(int, input().split()))
    res = ceil(arr[2]/arr[0]) + ceil(arr[3]/arr[1])
    print(res)
