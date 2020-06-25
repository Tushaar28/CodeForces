s1 = input()
s2 = input()
ans = ""
cnt = 0
if(len(s1) != len(s2)):
    ans = "NO"
else:
    pos = []
    for i in range(len(s1)):
        if(s1[i] != s2[i]):
            cnt += 1
            pos.append(i)
        if(cnt > 2):
            ans = "NO"
            break
    if(len(pos) != 2):
        ans = "NO"
    else:
        arr_s1 = []
        arr_s2 = []
        for char1, char2 in zip(s1, s2):
            arr_s1.append(char1)
            arr_s2.append(char2)
        arr_s1[pos[0]], arr_s1[pos[1]] = arr_s1[pos[1]], arr_s1[pos[0]]
        s1 = ''.join(arr_s1)
        s2 = ''.join(arr_s2)
        #print(s1, s2, end = '\n')
    if(s1 == s2):
        ans = "YES"
    else:
        ans = "NO"

print(ans)