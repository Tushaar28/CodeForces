def func(arr):
    m = max(arr)
    s = 0
    for ele in arr:
        s += (m - ele)
    return s

n = int(input())
arr = list(map(int, input().split()))
print(func(arr))