n = int(input())
arr = list(map(int, input().split()))
ans = -1
for i in range(n):
    prev = i - 1
    curr = i
    cnt_b = 0
    while(prev >= 0 and arr[prev] <= arr[curr]):
        cnt_b += 1
        curr = prev
        prev -= 1
    curr = i
    fwd = i + 1
    cnt_f = 0
    while(fwd < n and arr[fwd] <= arr[curr]):
        cnt_f += 1
        curr = fwd
        fwd += 1
    ans = max(ans, 1 + cnt_b + cnt_f)

print(ans)
    