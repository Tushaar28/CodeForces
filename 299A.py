n = int(input())
arr = list(map(int, input().split()))
min_ = arr[0]
for i in range(1, n):
    min_ = min(min_, arr[i])
for ele in arr:
    if(ele % min_ != 0):
        print(-1)
        break
else:
    print(min_)