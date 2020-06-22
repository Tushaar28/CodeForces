n = int(input())
arr = list(map(int, input().split()))
s = 0
e = n - 1
ans = 0
while(s < e):
    if(arr[s] == arr[e]):
        s += 1
    else:
        ans = e - s
        break
s = 0
e = n - 1
while(s < e):
    if(arr[s] == arr[e]):
        e -= 1
    else:
        ans = max(ans, e - s)
        break
print(ans)