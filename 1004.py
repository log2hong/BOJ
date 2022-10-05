tc = int(input())
for i in range(tc):
    x1, y1, x2, y2 = map(int, input().split())

    n = int(input())
    ans = 0
    for i in range(n):
        cx, cy, r = map(int, input().split())
        d1 = (((x1 - cx) ** 2) + ((y1 - cy) ** 2))
        d2 = (((x2 - cx) ** 2) + ((y2 - cy) ** 2))
        if (d1 < r ** 2 and d2 > r ** 2) or (d1 > r ** 2 and d2 < r ** 2):
            ans += 1
    print(ans)