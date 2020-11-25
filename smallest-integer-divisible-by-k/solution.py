class Solution:
    def smallestRepunitDivByK(self, K: int) -> int:
        if (K % 2 == 0 or K % 5 == 0):
            return -1
        i = 1
        d = 10
        size = 1
        while True:
            if (i % K == 0):
                return size
            i += d
            d *= 10
            size += 1
        return -1