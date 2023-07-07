class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return ({i: s.count(i) for i in set(s)} == {i: t.count(i) for i in set(t)})