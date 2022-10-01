s = input()

flag = True
for i in range(len(s) // 2):
    if s[i] != s[-i-1]:
        flag = False

if flag == True:
    print(1)
else:
    print(0)