def func(arr):
    n = len(arr)
    if(n == 1):
        return 1
    for i in range(n):
        arr[i][0], arr[0][i] = 1, 1
    for i in range(1, n):
        for j in range(1, n):
            arr[i][j] = arr[i-1][j] + arr[i][j-1]
    
    return arr[-1][-1]

n = int(input())
arr = [[0 for _ in range(n)] for _ in range(n)]
print(func(arr))