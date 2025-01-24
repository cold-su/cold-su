n = int(input())
ans = 0
for i in range(1, n + 1):
	def solve(x):
		res = 1
		for i in range(1, x + 1):
			res *= i
		return res
	ans += solve(i)
print(ans)