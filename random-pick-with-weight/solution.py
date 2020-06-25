import random

class Solution:

    def __init__(self, w: List[int]):
        self.w = w
        self.nw = [i for i in range(len(w))]
    
    def pickIndex(self) -> int:
        return random.choices(self.nw, self.w)[0]

# Your Solution object will be instantiated and called as such:
# obj = Solution(w)
# param_1 = obj.pickIndex()