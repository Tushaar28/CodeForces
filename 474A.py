s = "qwertyuiopasdfghjkl;zxcvbnm,./"
x = input()
st = input()
res = []
for char in st:
    if(x == 'R'):
        res.append(s[s.index(char) - 1])
    else:
        res.append(s[s.index(char) + 1])
print(''.join(res))