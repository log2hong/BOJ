while True:
    arr = list(map(int, input().split()))

    if sum(arr) == 0:
        break

    elif sum(arr) <= 2 * max(arr):
        print("Invalid")

    elif arr[0] == arr[1] and arr[1] == arr[2]:
        print("Equilateral")
    
    elif arr[0] == arr[1] or arr[1] == arr[2] or arr[0] == arr[2]:
        print("Isosceles")
    
    else:
        print("Scalene")