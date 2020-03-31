def printNav(n, p, k):
    if(p - k > 1):
        print("<<", end = ' ')
    for i in range(p - k, p + k + 1):
        if(i > 0 and i <= n):
            if(i == p):
                print("(", i, ")",sep = '', end = ' ')
                continue
            print(i, end = ' ')
    if(p + k < n):
        print(">>")

n, p, k = map(int, input().split())
printNav(n, p, k)