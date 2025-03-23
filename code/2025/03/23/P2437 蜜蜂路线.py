m, n = map(int, input().split())
ans = [1, 1]
for i in range(n - m):
	ans[i % 2] = ans[0] + ans[1]
print(ans[(n - m) % 2])