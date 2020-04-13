n = int(input())
arr = list(map(int, input().split()))
arr = sorted(arr)
ans = False
for i in range(1, n-1):
    if(arr[i - 1] + arr[i] > arr[i + 1]):
        ans = True
        break;
if(ans):
    print("YES")
else:
    print("NO")