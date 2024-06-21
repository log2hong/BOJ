h1, m1, s1 = map(int, input().split(':'))
h2, m2, s2 = map(int, input().split(':'))

t1 = h1 * 3600 + m1 * 60 + s1
t2 = h2 * 3600 + m2 * 60 + s2

dt = t2 - t1 if t2 > t1 else t2 - t1 + 24 * 3600

print(f'{dt // 3600:02}:{dt % 3600 // 60:02}:{dt % 60:02}')