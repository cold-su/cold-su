n, k = map(int, input().split())
for i in range(k):
	s = str(n)
	if s[len(s) - 1] == '0':
		s = s[:-1]
		n = int(s)
		continue
	else:
		n -= 1
		continue
print(n)
