st = input()
s = set()
for char in st:
    s.add(char)
if((len(s) & 1) == 1):
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!")