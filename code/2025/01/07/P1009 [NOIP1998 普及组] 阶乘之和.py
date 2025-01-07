ans = 0
n = int(input())
for x in range(1, n + 1):
	t = 1
	for y in range(1, x + 1):
		t *= y
	ans += t
print(ans)