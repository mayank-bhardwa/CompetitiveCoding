def isDivisibleBy41(d1, d2, c, L):
    digits = [d1, d2]
    for i in range(3, L+1):
        digits.append((digits[i-2]*c + digits[i-3]) % 10)
    num = int("".join(map(str, digits)))
    return num % 41 == 0


d1, d2, c, L = map(int, input().split())
print(isDivisibleBy41(d1, d2, c, L))
