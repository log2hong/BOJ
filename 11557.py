tc = int(input())

for i in range(tc):
    arr = []
    n = int(input())
    for j in range(n):
        name, amount = input().split()
        arr.append([int(amount), name])
    arr = sorted(arr)
    print(arr[-1][-1])