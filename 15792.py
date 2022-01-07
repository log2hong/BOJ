A, B = map(int, input().split())

res = (str(A//B)+".")
d = A % B

for i in range(1000):
    d *= 10
    m = d // B
    res += str(m)
    d %= B
    if d == 0:
        break

print(res)