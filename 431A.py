arr = list(map(int, input().split()))
st = input()
s = 0
for char in st:
    s += arr[(ord(char) - ord('0')) - 1]
print(s)