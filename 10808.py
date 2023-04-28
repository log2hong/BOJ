s = input()

arr = [0 for _ in range(26)]

for i in s:
    arr[ord(i) - ord('a')] += 1

for i in arr:
    print(i, end = " ")