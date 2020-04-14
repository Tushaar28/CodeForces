T = int(input())
while(T):
    s = input()
    pos = []
    pos.append(0)
    for i in range(len(s)):
        if(s[i] == 'R'):
            pos.append(i + 1)
    pos.append(len(s) + 1)
    ans = 0
    for i in range(len(pos)-1):
        ans = max(ans, pos[i + 1] - pos[i])
    print(ans)
    T -= 1