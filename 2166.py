n = int(input())

x = []
y = []
for _ in range(n):
    xx, yy = map(int, input().split())
    x.append(xx)
    y.append(yy)

ans = 0
for i in range(n):
    ans += (x[i] * y[(i + 1) % n] - x[(i + 1) % n] * y[i])
ans = abs(ans) * 0.5

print("%.1f"%(ans))