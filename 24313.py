a1, a0 = map(int, input().split())
c, n0 = int(input()), int(input())

print(int(a1 * n0 + a0 <= c * n0 and c >= a1))