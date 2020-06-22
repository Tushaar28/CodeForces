def func(s, s1):
    if(s > s1):
        s, s1 = s1, s
    for i in range(len(s)):
        if(s[i] >= s1[i]):
            return "NO"
    return "YES"

n = int(input())
s = input()
s1 = s[n:]
s = s[:n]
s = sorted(s)
s1 = sorted(s1)
print(func(s, s1))