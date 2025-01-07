def solve():
	n, a = map(int, input().split())
	res = 1
	for i in range(1, n + 1):
		res *= i
	s = str(res)
	cnt = 0
	for i in range(len(s)):
		cnt += int(s[i]) == a
	print(cnt)
t = int(input())
for i in range(t):
	solve()