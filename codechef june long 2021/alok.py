from random import randint

t = randint(1, 1e5 + 1)
print(t)
while t:
    t -= 1
    d = randint(1, 1e6 + 1)
    D = randint(d, 1e6 + 1)
    P = randint(1, 1e6 + 1)
    Q = randint(1, 1e6 + 1)
    print(D, d, P, Q)
