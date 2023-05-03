from collections import defaultdict

dict = defaultdict(bool)
dict['ChongChong'] = True
cnt = 1

for _ in range(int(input())):
    A, B = input().split()

    if dict[A]:
        if not dict[B]:
            dict[B] = True
            cnt += 1
    elif dict[B]:
        dict[A] = True
        cnt += 1

print(cnt)