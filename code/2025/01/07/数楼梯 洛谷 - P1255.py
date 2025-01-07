n = int(input())
f = [2, 1]
for i in range(3, n + 1):
	f[i % 2] = f[0] + f[1]
print(f[n % 2])