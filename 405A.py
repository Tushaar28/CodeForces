def func(arr, n):
    arr = sorted(arr)
    for ele in arr:
        print(ele, end = " ")

n = int(input())
arr = list(map(int, input().split()))
func(arr, n)