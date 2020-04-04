def func(st):
    n = len(st)
    up, down = 0, 0
    for char in st:
        if(str(char).isupper()):
            up += 1
        else:
            down += 1
    if((n & 1) == 1):
        if(up > down):
            return st.upper()
        return st.lower()
    if(up > down):
        return st.upper()
    elif(down > up):
        return st.lower()
    return st.lower()
        

st = input()
print(func(st))