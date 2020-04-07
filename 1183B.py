T = int(input())
while(T > 0):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    low = min(arr)
    high = max(arr)
    if(high - low > 2 * k):
        print(-1)
    else:
        print(low + k)
    T -= 1