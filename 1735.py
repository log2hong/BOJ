def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

a, b = map(int, input().split())
c, d = map(int, input().split())

nu = (a * d + c * b)
de = b * d

print("%d %d"%(nu // gcd(nu, de), de // gcd(nu, de)))
