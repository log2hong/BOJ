n = int(input())

max_rew = 0
for i in range(n):
    dice = list(map(int, input().split()))
    if dice[0] == dice[1] and dice[1] == dice[2]:
        rew = 10000 + dice[0] * 1000
    elif dice[0] == dice[1] or dice[1] == dice[2]:
        rew = 1000 + dice[1] * 100
    elif dice[0] == dice[2]:
        rew = 1000 + dice[0] * 100
    else:
        rew = max(dice) * 100
    max_rew = max(rew, max_rew)
    
print(max_rew)