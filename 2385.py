from functools import cmp_to_key

def cmp(a, b):
    if a + b > b + a:
        return 1
    if a + b < b + a:
        return -1
    return 0

n = int(input())
arr = list(map(str, input().split()))

anstemp = []
for i in range(len(arr)):
    if arr[i][0] == '0':
        continue
    else:
        qarr = arr[:]
        qarr.pop(i)

        length = sum(len(j) for j in qarr)
        ans = ''
        while len(qarr) != 0:
            qarr.sort(key = cmp_to_key(cmp))
            ans = ans + qarr[0]
            qarr.pop(0)
        anstemp.append(arr[i] + ans)

if len(anstemp) == 0:
    print("INVALID")
else:
    anstemp.sort(key = cmp_to_key(cmp))
    print(anstemp[0])