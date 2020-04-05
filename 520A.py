n = int(input())
s = input()
if(n < 26):
    print("NO")
else:
    se = set()
    s = s.lower()
    for char in s:
        se.add(char)
    if(len(se) == 26):
        print("YES")
    else:
        print("NO")