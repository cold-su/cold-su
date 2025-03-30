class Solution:
    def addSpaces(self, s: str, sp: List[int]) -> str:
        i, j = 0, 0
        ans = ""
        for c in s:
            if i < len(sp) and sp[i] == j:
                ans += " "
                i += 1
            ans += c
            j += 1
        return ans