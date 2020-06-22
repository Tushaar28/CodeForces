def func(s, k):
    n = len(s)
    if(n % k != 0):
        return "NO"
    res = []
    for i in range(0, n, n // k):
        res.append(s[i : n // k])
    for ele in res:
        if(ele != ele[::-1]):
            return "NO"
    return "YES"

s = input()
k = int(input())
print(func(s, k))