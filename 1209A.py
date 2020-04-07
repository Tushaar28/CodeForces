def minColors(arr):
    color = 0
    done = set()
    arr = sorted(arr)
    for i in range(len(arr)):
        if(arr[i] not in done):
            color += 1
            done.add(arr[i])
        for j in range(len(arr)):
            if(arr[i] == arr[j]):
                continue
            if(arr[j] % arr[i] == 0):
                done.add(arr[j])
    return color
    

n = int(input())
arr = list(map(int, input().split()))
print(minColors(arr))