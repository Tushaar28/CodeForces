n = int(input())
arr = list(map(int, input().split()))
dp = [0] * n
dp[0] = 1
for i in range(1, n):
    if(arr[i] >= arr[i-1]):
        dp[i] = 1 + dp[i-1]
    else:
        dp[i] = 1
print(max(dp))