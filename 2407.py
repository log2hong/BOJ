n, m = map(int, input().split())
if n // 2 < m:
    m = n - m

num, den = 1, 1
for i in range(m, 0, -1):
    num *= n
    den *= m
    n -= 1
    m -= 1

print(num // den)