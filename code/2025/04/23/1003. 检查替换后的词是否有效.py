class Solution:
    def isValid(self, s: str) -> bool:
        a = []
        for i, c in enumerate(s):
            a.append(c)
            if len(a) >= 3:
                if a[-1] == 'c' and a[-2] == 'b' and a[-3] == 'a':
                    a = a[:-3]
        return len(a) == 0