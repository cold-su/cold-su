class Solution:
	def getRow(self, rowIndex: int) -> List[int]:
		def f(n):
			ans = 1
			for i in range(1, n + 1):
				ans *= i
			return ans
		def C(n, m):
			return f(n) / (f(m) *  f(n - m))
		ans = []
		for i in range(0, rowIndex + 1):
			ans.append(int(C(rowIndex, i)))
		return ans