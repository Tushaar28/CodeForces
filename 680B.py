n, a = map(int, input().split())
arr = list(map(int, input().split()))
arr.insert(0, 0)
cnt = 0
cnt += arr[a]
k = 1
while(a - k >= 1 and a + k <= n):
    if((arr[a - k] ^ arr[a + k]) == 0):
        cnt += arr[a - k] + arr[a + k]
    k += 1
while(a - k >= 1):
    cnt += arr[a - k]
    k += 1
while(a + k <= n):
    cnt += arr[a + k]
    k += 1
print(cnt)