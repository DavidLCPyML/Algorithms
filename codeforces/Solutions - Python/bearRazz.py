# 385A
import sys
input = sys.stdin.readline

n, c = map(int,input().split())
prices = list(map(int,input().split()))

print(max(max([prices[i] - prices[i+1] - c for i in range(n-1)]), 0))
