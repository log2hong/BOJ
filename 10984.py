T = int(input())
for _ in range(T):
    N = int(input())

    totalC, totalG = 0, 0.0
    for _ in range(N):
        C, G = input().split()
        totalC += int(C)
        totalG += int(C) * float(G)

    print(f'{totalC} {(totalG / totalC):.1f}')