s = input()
ans = (1 << len(s)) - 2
pos = 0
for i in range(len(s) - 1, -1, -1):
    if(s[i] == '7'):
        ans += (1 << pos)
    pos += 1
print(ans + 1)