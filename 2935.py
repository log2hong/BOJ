A = input()
operator = input()
B = input()

if operator == '*':
    print(10**(len(A) + len(B) - 2))
else:
    if len(A) == len(B):
        print("2" + (len(A) - 1) * "0")
    else:
        print("1" + (abs(len(A) - len(B)) - 1) * "0" + "1" + (min(len(A), len(B)) - 1) * "0")