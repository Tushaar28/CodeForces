n = int(input())
res = [0] * (n+1)
for i in range(n):
    a, b = map(int, input().split())
    res[i] = res[i-1] + (b - a)
print(max(res))