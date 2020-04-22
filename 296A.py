n = int(input())
arr = list(map(int, input().split()))
max_ = max(arr, key = arr.count)
print("YES" if(arr.count(max_) <= (n + 1) // 2) else "NO")