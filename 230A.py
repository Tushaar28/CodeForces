def func(arr, s):
    for x, y in sorted(arr):
        if(s > x):
            s += y
        else:
            return "NO"
    return "YES"

s, n = map(int, input().split())
arr = []
for _ in range(n):
    arr.append(tuple(map(int, input().split())))
print(func(arr, s))