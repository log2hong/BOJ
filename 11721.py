s = input()
for i in range((len(s) - 1) // 10 + 1):
    print(s[10*i:min(10 * (i + 1), len(s))])