import math
import sys
input = sys.stdin.readline

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

for _ in range(int(input())):
    n = int(input())
    perm = list(range(1, n + 1))

    i = 0
    while i < n:
        if not is_prime(perm[i]):
            next_prime = perm[i]
            while is_prime(next_prime) or next_prime == perm[i]:
                next_prime += 1
            j = i + 1
            while j < n:
                if perm[j] == next_prime:
                    perm[i], perm[j] = perm[j], perm[i]
                    break
                j += 1
        i += 1

    print(' '.join(map(str, perm)))