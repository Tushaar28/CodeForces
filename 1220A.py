def func(st):
    n = st.count('n')
    z = st.count('z')
    for _ in range(n):
        print(1, end = " ")
    for _ in range(z):
        print(0, end = " ")
        
n = int(input())
st = input()
func(st)