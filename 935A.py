def func(n):
    cnt = 0
    for l in range(1, n):
        if(l * ((n - l) // l) + l == n):
            cnt += 1
    return cnt

n = int(input())
print(func(n))