s = input()
pos = [0] * 4
ans = [0] * 4
for i in range(len(s)):
    if(s[i] == 'R'):
        pos[0] = i % 4
    elif(s[i] == 'B'):
        pos[1] = i % 4
    elif(s[i] == 'Y'):
        pos[2] = i % 4
    elif(s[i] == 'G'):
        pos[3] = i % 4

for i in range(len(s)):
    if(s[i] == '!'):
        index = i % 4
        ans[pos[index]] += 1
for ele in ans:
    print(ele, end = " ")