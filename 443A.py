st = input()
st = st.strip('{')
st = st.strip('}')
if(len(st) == 0):
    print(0)
else:
    arr = list(st.split(', '))
    s = set()
    for ele in arr:
        s.add(ele)
    print(len(s))