def func(arr, n):
    c = []
    b = []
    for i in range(n):
        if(arr[i] < 0):
            c.append(arr[i])
        else:
            b.append(arr[i])

    return sum(b) - sum(c)

n = int(input())
arr = list(map(int, input().split()))
print(func(arr, n))