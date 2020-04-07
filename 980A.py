s = input()
o = s.count('o')
c_ = s.count('-')
if(o == 0):
    print("YES")
elif(c_ % o == 0):
    print("YES")
else:
    print("NO")