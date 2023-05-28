import sys
input = sys.stdin.readline

n, k = map(int, input().split())
thms = list(map(int, input().split()))
sleep = list(map(int, input().split()))
tot = sum([thms[i] for i in range(n) if sleep[i]])

# k-len sliding window
currsum = 0
for i in range(k):
    currsum += thms[i] if not sleep[i] else 0
start = 1
maxthms = currsum
debug = [currsum]

while start <= n-k:
    currsum += thms[start+k-1] if not sleep[start+k-1] else 0
    currsum -= thms[start-1] if not sleep[start-1] else 0
    maxthms = max(maxthms, currsum)
    debug.append(currsum)
    start += 1

print(maxthms + tot)
# sheesh this problem got hands
