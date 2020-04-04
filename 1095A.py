def func(st):
    k = 1
    i = 0
    res = ""
    while(i < len(st)):
        res += st[i]
        k += 1
        i += k
    return res

n = int(input())
st = input()
print(func(st))