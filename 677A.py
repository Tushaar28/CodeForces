def width(arr, h):
    w = 0
    for ele in arr:
        if(ele > h):
            w += 2
        else:
            w += 1
    return w;
    

n, h = map(int, input().split())
arr = list(map(int, input().split()))
print(width(arr, h))