import math
n, m = map(int, input().split())
arr = list(map(int, input().split()))
ans = 0
pos = -1
for i in range(len(arr)):
    if(ans <= math.ceil(arr[i] / m)):
        ans = math.ceil(arr[i] / m)
        pos = i+1
print(pos)