def func(arr, n):
    cnt = 0
    high = low = arr[0]
    for i in range(1, n):
        if(high < arr[i]):
            high = arr[i]
            cnt += 1
        if(low > arr[i]):
            low = arr[i]
            cnt += 1
    return cnt

n = int(input())
arr = list(map(int, input().split()))
print(func(arr, n))