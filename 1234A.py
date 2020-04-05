import math
def func(arr, n):
    return math.ceil(sum(arr) / n)

T = int(input())
while(T > 0):
    n = int(input())
    arr = list(map(int, input().split()))
    print(func(arr, n))
    T -= 1