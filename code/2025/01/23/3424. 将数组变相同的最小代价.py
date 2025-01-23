class Solution:
    def minCost(self, arr: List[int], brr: List[int], k: int) -> int:
        ans1 = sum(abs(x - y) for x, y in zip(arr, brr))
        ans2 = sum(abs(x - y) for x, y in zip(sorted(arr), sorted(brr))) + k
        return min(ans1, ans2)