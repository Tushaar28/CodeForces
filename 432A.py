def func(arr, k):
    cnt = 0
    for ele in arr:
        if(ele + k <= 5):
            cnt += 1
    return cnt // 3

n, k = map(int, input().split())
arr = list(map(int, input().split()))
print(func(arr, k))