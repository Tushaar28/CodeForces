
n = int(input())
arr = list(map(int, input().split()))
res = []
cnt = x = 0
for i in range(n):
    if(x == arr[i]):
        cnt += 1
    else:
        res.append(cnt)
        x = arr[i]
        cnt = 1
res.append(cnt)
ans = 0
for i in range(len(res)-1):
    ans = max(min(res[i], res[i+1]) * 2, ans)
print(ans)