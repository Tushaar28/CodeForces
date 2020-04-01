def func(a, b):
    i = 0
    while(b >= a):
        b *= 2
        a *= 3
        i += 1
    return i

a, b = map(int, input().split())
print(func(a, b))