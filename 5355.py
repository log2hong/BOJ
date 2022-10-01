n = int(input())

for i in range(n):
    s = input().split()
    ans = float(s[0])
    for j in range(1, len(s)):
        if s[j] == '@':
            ans *= 3
        elif s[j] == '%':
            ans += 5
        elif s[j] == '#':
            ans -= 7
    print("{:.2f}".format(ans))