def func(st):
    a = st.count('a')
    l = len(st)
    if(a * 2 > l):
        return l
    else:
        return 2*a - 1
    
st = input()
print(func(st))