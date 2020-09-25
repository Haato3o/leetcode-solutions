class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        from collections import Counter
        s = Counter(s)
        t = Counter(t)
        for k in t:
            if (k not in s): return k
            if (t[k] > s[k]): return k