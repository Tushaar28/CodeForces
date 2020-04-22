k = int(input())
s = sorted(input())
x = s[::k] * k
if(sorted(x) == s):
    print(''.join(x))
else:
    print(-1)