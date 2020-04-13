s = input()
s = s.replace('WUB', ' ')
s = s.strip()
arr = s.split(' ')
ans = ''
for ele in arr:
    if(ele != ''):
        ans += ele
        ans += ' '
ans = ans.strip()
print(ans)