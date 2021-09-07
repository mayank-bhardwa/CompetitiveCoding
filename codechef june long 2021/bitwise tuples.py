t = int(input())
p = int(1e9 + 7)


def power(x, y):
    res = 1
    x = x % p

    if (x == 0):
        return 0

    while (y > 0):
        if ((y & 1) == 1):
            res = (res * x) % p

        y = y >> 1
        x = (x * x) % p

    return res


while t:
    t -= 1
    n, m = map(int, input().split())
    ans = power(2, n)-1
    ans = power(ans, m)
    print(ans)
