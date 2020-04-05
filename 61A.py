a = input()
b = input()
res = []
for i in range(len(a)):
    if(a[i] != b[i]):
        res.append('1')
    else:
        res.append('0')
print(''.join(res))