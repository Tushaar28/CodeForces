import math
def isAnswer(arr, x, d):
    cnt = 0
    for ele in arr:
        if(ele / d > 0):
            cnt += 1
    return cnt >= x

def func(arr, n):
    x = math.ceil(n / 2)
    pos = 0
    neg = 0
    zeros = 0
    for ele in arr:
        if(ele > 0):
            pos += 1
        elif(ele < 0):
            neg += 1
        else:
            zeros += 1
    if(pos >= neg):
        d = 1
        while(d <= 1000):
            if(isAnswer(arr, x, d)):
                return d
            d += 1
        return 0
    elif(pos <= neg):
        d = -1
        while(d >= -1000):
            if(isAnswer(arr, x, d)):
                return d
            d -= 1
        return 0
    elif(pos == neg):
        return 0
    

n = int(input())
arr = list(map(int, input().split()))
print(func(arr, n))