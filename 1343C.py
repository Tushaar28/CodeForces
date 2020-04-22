def sign(x):
    if(x > 0):
        return 1
    return -1

T = int(input())
while(T):
    n = int(input())
    arr = list(map(int, input().split()))
    max_ = float("-inf")
    res = 0
    i = 0
    while(i < n):
        max_ = arr[i]
        j = i + 1
        while(j < n and sign(arr[i]) == sign(arr[j])):
            max_ = max(max_, arr[j])
            j += 1
        res += max_
        i = j
    print(res)
    T -= 1