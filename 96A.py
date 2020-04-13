s = input()
z = s.count('0000000')
o = s.count('1111111')
if(o > 0 or z > 0):
    print("YES")
else:
    print("NO")