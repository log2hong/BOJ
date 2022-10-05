tc = int(input())

for i in range(tc):
    y, k = 0, 0
    for j in range(9):
        n, m = map(int, input().split())
        y += n
        k += m
    if y > k:
        print("Yonsei")
    elif y == k:
        print("Draw")
    else:
        print("Korea")