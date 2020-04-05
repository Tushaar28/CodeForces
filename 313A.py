n = int(input())
res = n
res = max(res, n//10)
res = max(res, n%10 + (n // 100) * 10)
print(res)