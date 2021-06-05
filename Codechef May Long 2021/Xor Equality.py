try:
    t = int(input())
    while(t > 0):
        t = t-1
        n = int(input())
        res = (1 << (n-1)) % (1000000007)
        print(res)
except Exception:
    raise Exception
