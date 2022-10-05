tc = int(input())

for i in range(tc):
    y, k = 0, 0
    for j in range(9):
        x, y = map(int, input().split())
        y += x
        k += y
    if y > k:
        print("Yonsei")
    elif y == k:
        print("Draw")
    else:
        print("Korea")