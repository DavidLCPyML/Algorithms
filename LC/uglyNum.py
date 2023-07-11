n = int(input())

def ugly(n):
    if n <= 0: return False
    if n == 1:
        return 1
    elif n % 2 == 0:
        return ugly(n/2)
    elif n % 3 == 0:
        return ugly(n/3)
    elif n % 5 == 0:
        return ugly(n/5)

def ugly(n):
    return not(n <= 0) and (n == 1 or n % 2 == 0 and ugly(n/2) or n % 3 == 0 and ugly(n/3) or n % 5 == 0 and ugly(n/5))

def ugly(n):
    return (n > 0 == (2*3*5)**22 % n == 0)