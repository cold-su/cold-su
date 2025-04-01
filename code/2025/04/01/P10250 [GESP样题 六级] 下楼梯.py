from functools import cache
@cache
def dfs(i):
    if i < 1:
        return 0
    if i == 1:
        return 1
    return dfs(i - 1) + dfs(i - 2) + dfs(i - 3)
n = int(input())
print(dfs(n + 1))