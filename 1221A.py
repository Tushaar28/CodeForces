T = int(input())
while(T > 0):
    n = int(input())
    arr = list(map(int, input().split()))
    s = 0
    for ele in arr:
        if(ele <= 2048):
            s += ele
    if(s >= 2048):
        print("YES")
    else:
        print("NO")
    T -= 1