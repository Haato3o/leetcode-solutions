def mini(a, b):
    if (a <= b):
        return 0
    else:
        return 1

class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        def rate(e):
            return e[0]-e[1]
        
        nl = sorted(costs, key=rate)
        l = len(costs) // 2
        ans = 0
        
        for i in range(len(nl)):
            if (i < l):
                ans += nl[i][0]
            else:
                ans += nl[i][1]
        return ans
        
        