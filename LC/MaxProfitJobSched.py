from bisect import bisect_left
import heapq

startTime = list(map(int, input().split()))
endTime = list(map(int, input().split()))
profit = list(map(int, input().split()))

# A
jobs = sorted(zip(startTime, endTime, profit), key=lambda x: x[0])
dp, starts = [0] * len(jobs)+1, [i[0] for i in jobs]
dp[0] = jobs[0][2]
for i in range(len(jobs)-1, -1, -1):
    j = bisect_left(starts, jobs[i][1])
    dp[i] = max(dp[i+1], jobs[i][2] + dp[j])
print(dp[0])

# B
jobs = sorted(zip(startTime, endTime, profit), key=lambda x: x[0])
heap = []
cur = mx = ans = 0
for s, e, p in jobs:
    while heap and heap[0][0] <= s:
        _, tmp = heapq.heappop(heap)
        cur = max(cur,tmp)
    heapq.heappush(heap, (e,p+cur))
    ans = max(ans, cur+p)
print(ans)