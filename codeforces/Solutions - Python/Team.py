# cnt = 0
# for _ in range(int(input())):
#     a,b,c = map(int,input().split())
#     cnt += (a+b+c) >= 2
# print(cnt)

print(sum(sum(map(int, input().split()))>1 for _ in range(int(input()))))