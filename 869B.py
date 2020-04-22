a, b = map(int, input().split())
if(b - a > 10):
    print(0)
else:
    res = 1
    for i in range(b, a, -1):
        res *= (i % 10)
    print(res % 10)