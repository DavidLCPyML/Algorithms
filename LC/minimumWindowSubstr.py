s = input().strip()
t = input().strip()

def minWindow(s, t):
            freq, left = defaultdict(int), len(t)
        for i in t:
            if i not in freq:
                freq[i] = 0
            freq[i] += 1
        
        i = l = r = 0
        for j, c in enumerate(s, 1):
            if freq[c] > 0:
                left -= 1
            freq[c] -= 1
            if not left:
                while i < j and freq[s[i]] < 0:
                    freq[s[i]] += 1
                    i += 1
                if not r or j - i <= r - l:
                    l, r = i, j
        return s[l:r]

print(minWindow(s, t))