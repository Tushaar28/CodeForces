def func(m, c):
    n = len(m)
    mw, cw = 0, 0
    for (x, y) in zip(m, c):
        if(x > y):
            mw += 1
        elif(y > x):
            cw += 1
        else:
            cw, mw = cw + 1, mw + 1
        if(mw >= n//2 + 1 and cw < n//2 + 1):
            return "Mishka"
        if(cw >= n//2 + 1):
            return "Chris"
    return "Friendship is magic!^^"

n = int(input())
m = []
c = []
for _ in range(n):
    x, y = map(int, input().split())
    m.append(x)
    c.append(y)

print(func(m, c))