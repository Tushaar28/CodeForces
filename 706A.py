a, b = map(int, input().split())
n = int(input())
x = []
y = []
v = []
for _ in range(n):
    xi, yi, vi = map(int, input().split())
    x.append(xi)
    y.append(yi)
    v.append(vi)

ans = 9999999999
for i in range(n):
    t = (((x[i] - a) ** 2 + (y[i] - b) ** 2) ** 0.5) / v[i]
    ans = min(t, ans)

print(ans)