def func(n):
    res = []
    if((n & 1) == 1):
        res.append(3)
        n -= 3
    while(n):
        res.append(2)
        n -= 2
    print(len(res))
    for ele in res:
        print(ele, end = ' ')

n = int(input())
func(n)