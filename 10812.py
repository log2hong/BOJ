n, m = map(int, input().split())

arr = list(range(1, n + 1))

for _ in range(m):
    i, j, k = map(int, input().split())
    arr[i - 1 : j] = arr[k - 1: j] + arr[i - 1: k - 1]

print(*arr)