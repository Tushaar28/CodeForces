n = int(input())
b = list(map(int, input().split()))
a = []
a.append(b[0])
temp = 0
for i in range(1, len(b)):
    temp = max(temp, a[i - 1])
    a.append(b[i] + temp)

for ele in a:
    print(ele, end = " ")
    