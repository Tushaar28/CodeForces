def func(a, b, c, n):
    x = max(a, b, c)
    y = 3 * x - (a + b + c)
    if(n >= y and abs(n - y) % 3 == 0):
        return "YES"
    return "NO"
    
T = int(input())
while(T > 0):
    a, b, c, n = map(int, input().split())
    print(func(a, b, c, n))
    T -= 1