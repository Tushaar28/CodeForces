def thanosSort(arr):
    if(sorted(arr) == arr):
        return len(arr)
    k = len(arr) // 2
    return max(thanosSort(arr[:k]), thanosSort(arr[k:]))

n = int(input())
arr = list(map(int, input().split()))
print(thanosSort(arr))
