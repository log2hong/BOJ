n, m = map(int, input().split())

arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

for i in range(n):
    temp = list(map(int, input().split()))
    for j in range(m):
        print(arr[i][j] + temp[j], end = ' ')
    print()