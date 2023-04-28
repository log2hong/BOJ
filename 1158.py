n, k = map(int, input().split())

arr = [i for i in range(1, n + 1)]
ans = []
idx = 0

while(len(arr)):
    idx = (idx + k - 1) % len(arr)
    ans.append(str(arr[idx]))
    del arr[idx]

print("<", ", ".join(ans)[:], ">", sep = "")