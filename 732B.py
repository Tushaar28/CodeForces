n, k = map(int, input().split())
arr = list(map(int, input().split()))
cnt = 0
for i in range(1, len(arr)):
    if(arr[i - 1] + arr[i] < k):
        x = arr[i]
        arr[i] = k - arr[i - 1]
        cnt += arr[i] - x
print(cnt)
for i in range(len(arr)):
    print(arr[i], end = " ")