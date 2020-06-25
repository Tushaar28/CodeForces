s1 = input()
s2 = input()
freq = [0] * 256
ans = "YES"
for char in s1:
    if(char == ' '):
        continue
    freq[ord(char)] += 1
for char in s2:
    if(char == ' '):
        continue;
    elif(freq[ord(char)] == 0):
        ans = "NO"
        break
    freq[ord(char)] -= 1

print(ans)