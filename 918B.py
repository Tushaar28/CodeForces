d = {}
n, m = map(int, input().split())
for _ in range(n):
    name, ip = map(str, input().split())
    d.__setitem__(ip, name)
comm = []
ip = []
for _ in range(m):
    c, i = map(str, input().split())
    i = i.strip(';')
    comm.append(c)
    ip.append(i)
for x in range(m):
    c = comm[x]
    i = ip[x]
    print(c, i, sep = " ", end = "; #")
    print(d[i])