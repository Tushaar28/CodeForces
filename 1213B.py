import math

T = int(input())
while(T):
    n = int(input())
    arr = list(map(int, input().split()))
    min_ = math.inf
    cnt = 0
    for i in range(n-1, -1, -1):
        if(arr[i] > min_):
            cnt += 1
        min_ = min(min_, arr[i])
    print(cnt)
    T -= 1