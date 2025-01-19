def solve():
	stack = []
	mapping = {')': '(', ']': '[', '}': '{'}
	s = input()
	for char in s:
		if char in ['(', '[', '{']:
			stack.append(char)
		elif char in [')', ']', '}']:
			if not stack or stack.pop() != mapping[char]:
				return False
	return len(stack) == 0
n = int(input())
for i in range(n):
	if solve():
		print("Balanced")
	else:
		print("Not Balanced")