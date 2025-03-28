t = int(input())
for _ in range(t):
    l, r = map(int, input().split())
    l %= 9
    r %= 9
    if (l > r):
        r += 9
    ans = 0
    for i in range(l, r + 1):
        ans += i
    print(ans % 9)