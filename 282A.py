x = 0
n = int(input())
for _ in range(n):
    st = input()
    if(st.find('++') != -1):
        x += 1
    else:
        x -= 1
print(x)