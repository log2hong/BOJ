n = int(input())

tmp = 0
for i in range(n):
    if int(input()) == 1:
        tmp += 1
    else:
        tmp -= 1

if tmp > 0:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")