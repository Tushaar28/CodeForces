def func(st):
    a = st.count('A')
    d = st.count('D')
    if(a > d):
        return "Anton"
    elif(d > a):
        return "Danik"
    return "Friendship"

n = int(input())
st = input()
print(func(st))