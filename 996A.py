#import time

def func(n):
    arr = [1, 5, 10, 20, 100]
    cnt = 0
    for i in range(len(arr) - 1, -1, -1):
        if(n == 0):
            break
        while(n >= arr[i]):
            cnt += n // arr[i]
            n -= ((n // arr[i]) * arr[i]);
    return cnt

n = int(input())
#start = time.time()
print(func(n))
#end = time.time()