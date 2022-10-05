while(True):
    n = int(input())
    if n == -1:
        break
    
    arr = []
    for i in range(1, n // 2 + 1):
        if n % i == 0:
            arr.append(i)
    if sum(arr) == n:
        print("%d = " %n, end = "")
        for i in range(len(arr) - 1):
            print("%d + " %arr[i], end = "")
        print(arr[-1])
    else:
        print("%d is NOT perfect." %n)