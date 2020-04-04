def func(st):
    l = st.count('L')
    r = st.count('R')
    return l+r+1

n = int(input())
st = input()
print(func(st))