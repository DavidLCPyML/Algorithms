import heapq

nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))
k = int(input())

queue, ans = [], []
def push(a, b):
    if len(nums1) > a and len(nums2) > b:
        heapq.heappush(queue, (nums1[a] + nums2[b], a, b))
push(0,0)
while len(ans) < k and queue:
    _, i, j = heapq.heappop(queue)
    ans.append([nums1[i], nums2[j]])
    push(i, j+1)
    if not j: push(i+1, 0)

print(*ans, sep ='\n')