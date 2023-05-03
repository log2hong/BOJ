n = int(input())
_ = str(input())

cnt = 0
dict = {}

for _ in range(n - 1):
    s = str(input())
    if s == "ENTER":
        for _, value in dict.items():
            if value == 1:  
                cnt += 1 
        dict = {} 
        continue

    if s not in dict:
        dict[s] = 1 

for _, value in dict.items():
    if value == 1:
        cnt += 1

print(cnt)