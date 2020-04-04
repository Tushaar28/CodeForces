st = input()
if(st[0] >= 'A' and st[0] <= 'Z'):
    print(st)
else:
    s = chr(ord(st[0]) - 32)
    print(s+st[1:])