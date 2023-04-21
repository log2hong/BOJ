def dec_to_chr(d):
    if d <= 9:
        return str(d)
    else:
        return chr(ord('A') + d - 10)

n, b = map(int, input().split())

num = ""
while n > 0:
    num = dec_to_chr(n % b) + num
    n = n // b

print(num)