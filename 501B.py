n = int(input())
d = {}
for _ in range(n):
    old, new = input().split()
    if(old not in d):
        d[new] = old
    else:
        d[new] = d[old]
        d.pop(old)
print(len(d))
for k, v in d.items():
    print(v, k, sep = ' ')