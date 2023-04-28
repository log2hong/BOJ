s = input()
arr = [0 for _ in range(10)]

for i in s:
    arr[ord(i) - ord('0')] += 1

arr[6] = (arr[6] + arr[9] + 1) // 2
arr[9] = 0

print(max(arr))