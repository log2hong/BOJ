def chr_to_dec(c):
    if ord(c) >= ord('0') and ord(c) <= ord('9'):
        return ord(c) - ord('0')
    else:
        return ord(c) - ord('A') + 10

n, b = input().split()
b = int(b)

num = 0
for i in range(len(n)):
    num = num * b + chr_to_dec(n[i])

print(num)