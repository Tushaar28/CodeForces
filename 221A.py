n = int(input())
res = []
for i in range(1, n):
    res.append(i)
res.insert(0, n)
for ele in res:
    print(ele, end  =" ")