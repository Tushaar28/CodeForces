def func(arr):
    cnt = 1
    for i in range(len(arr)-1):
        if(arr[i] == arr[i+1]):
            cnt += 1
    return cnt

n = int(input())
arr = []
for i in range(n):
    x = input()
    if(x == '10'):
        arr.append('-')
        arr.append('+')
    else:
        arr.append('+')
        arr.append('-')

print(func(arr))