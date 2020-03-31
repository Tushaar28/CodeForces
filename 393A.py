def countNineteen(st):
    n = (st.count('n'))
    if(n > 0):
        n = (n-1) // 2
    i = st.count('i')
    e = st.count('e') // 3
    t = st.count('t')
    #print(n, i, e, t, sep = ' ')
    
    return min(n, i, e, t)

st = input()
print(countNineteen(st))