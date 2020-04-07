n = int(input())
arr = list(map(int, input().split()))
arr = sorted(arr)
cnt = 0
for i in arr:
    if(i > arr[0] and i < arr[-1]):
        cnt += 1
print(cnt)