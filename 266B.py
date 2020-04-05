def func(st, n, t):
    for _ in range(t):
        st = st.replace('BG', 'GB')
    return st
        

n, t = map(int, input().split())
st = input()
print(func(st, n, t))