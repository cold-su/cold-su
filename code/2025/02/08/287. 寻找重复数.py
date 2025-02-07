class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        p = 0
        for x in nums:
            if p & (1 << x):
                return x
            p |= 1 << x
        return p