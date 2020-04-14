def func(arr, n):
    if(arr[-1] == 15):
        return "DOWN"
    if(arr[-1] == 0):
        return "UP"
    if(n <= 1):
        return -1
    if(arr[-2] < arr[-1]):
        return "UP"
    return "DOWN"

n = int(input())
arr = list(map(int, input().split()))
print(func(arr, n))