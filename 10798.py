arr = []

for _ in range(5):
	arr.append(input())

for i in range(max(len(s) for s in arr)):
    for j in range(5):
        if i < len(arr[j]):
            print(arr[j][i], end = '')