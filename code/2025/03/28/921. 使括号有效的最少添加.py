class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        p = []
        k = 0
        for c in s:
            if c == '(':
                p.append(c)
            elif p:
                p.pop()
            else:
                k += 1
        return len(p) + k