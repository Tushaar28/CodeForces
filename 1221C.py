T = int(input())
while(T > 0):
    c, m, x = map(int, input().split())
    x += max(c, m) - min(c, m)
    c, m = min(c, m), min(c, m)
    ans = min(c, m, x)
    c -= ans
    m -= ans
    x -= ans
    ans += (c + m) // 3
    print(ans)
    T -= 1