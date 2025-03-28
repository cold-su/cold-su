m = int(input())
s = []
for i in range(m):
    p = input().split()
    if p[0] == "push":
        s.append(p[1])
    elif p[0] == "pop":
        if s:
            s.pop()
    elif p[0] == "empty":
        print("NO" if s else "YES")
    else:
        print(s[-1] if s else "empty")