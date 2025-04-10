class Solution:
    def maxUncrossedLines(self, a: List[int], b: List[int]) -> int:
        @cache
        def dfs(i, j):
            if i < 0 or j < 0:
                return 0
            if a[i] == b[j]:
                return dfs(i - 1, j - 1) + 1
            return max(dfs(i - 1, j), dfs(i, j - 1))
        return dfs(len(a) - 1, len(b) - 1)