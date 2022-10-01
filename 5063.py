n = int(input())

for i in range(n):
    r, e, c = map(int, input().split())
    tmp = r - e + c
    if tmp > 0:
        print("do not advertise")
    elif tmp == 0:
        print("does not matter")
    else:
        print("advertise")