class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        def k(e):
            return (-e[0], e[1])
        q = []
        for k in sorted(people, key=k):
            q.insert(k[1], k)
        return q