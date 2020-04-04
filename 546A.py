def func(k, n, w):
    ans = k * (w * (w + 1) // 2) - n
    return ans if ans >= 0 else 0

k, n, w = map(int, input().split())
print(func(k, n, w))