A, B, C = 300, 60, 10

T = int(input())
if T % C != 0:
    print("-1")
else:
    print("%d %d %d" %(T // A, (T % A) // B, (T % B) // C))