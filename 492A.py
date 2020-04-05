def func(n):
    l = 0
    req = 1
    while(n > 0):
        l += 1
        req = ((l+1) * (l+2)) // 2
        n -= req
    return l

n = int(input())
print(func(n))