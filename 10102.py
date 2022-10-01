v = int(input())
s = input()

A, B = 0, 0
for i in range(v):
    if s[i] == 'A':
        A += 1
    else:
        B += 1

if A > B:
    print("A")
elif B > A:
    print("B")
else:
    print("Tie")