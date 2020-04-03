def func(arr):
    total = sum(arr)
    ans = ((total) / (len(arr) * 100)) * 100
    print("%0.12f" %ans)

n = int(input())
arr = list(map(int, input().split()))
func(arr)