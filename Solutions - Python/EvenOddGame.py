import sys
input = sys.stdin.readline
t = int(input())
ans = []

for _ in range(t):
    n = int(input())
    game = sorted(map(int, input().split()), reverse=True)

    alice = 0
    bob = 0
    for i in range(len(game)):
        if i % 2 == 0 and game[i] % 2 == 0:
            alice += game[i]
        elif i % 2 == 1 and game[i] % 2 == 1:
            bob += game[i]
    
    if alice > bob:
        ans.append("Alice")
    elif alice < bob:
        ans.append("Bob")
    else:
        ans.append("Tie")

print(*ans, sep='\n')