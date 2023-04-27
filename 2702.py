def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

for _ in range(int(input())):
    a, b = map(int, input().split())
    print("%d %d"%(a * b // gcd(a, b), gcd(a, b)))