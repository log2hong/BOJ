n = int(input())

xmin = 10000
xmax = -10000
ymin = 10000
ymax = -10000

for _ in range(n):
    x, y = map(int, input().split())

    if x > xmax:
        xmax = x
    if x < xmin:
        xmin = x
    if y > ymax:
        ymax = y
    if y < ymin:
        ymin = y

print((xmax - xmin) * (ymax - ymin))