from functools import cmp_to_key

def cmp(a, b):
    if a + b > b + a:
        return 1
    if a + b < b + a:
        return -1
    return 0


n = int(input())
arr = list(input() for _ in range(n))

length = sum(len(i) for i in arr)
ans = ''
while len(ans) < length:
    arr.sort(key = cmp_to_key(cmp))
    ans = ans + arr[0][0]
    if len(arr[0]) > 1:
        arr[0] = arr[0][1:]
    else:
        arr.pop(0)

print(ans)