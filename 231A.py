n = int(input())
cnt = 0
for _ in range(n):
    st = input()
    if(st.count('1') > 1):
        cnt += 1
print(cnt)