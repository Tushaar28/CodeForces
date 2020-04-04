def func(arr):
    found = False
    for i in range(len(arr)):
        st = list(arr[i])
        if(st[0] == 'O' and st[1] == 'O'):
            st[0], st[1] = '+', '+'
            st = ''.join(st)
            arr[i] = st
            found = True
            break
        elif(st[3] == 'O' and st[4] == 'O'):
            st[3], st[4] = '+', '+'
            st = ''.join(st)
            arr[i] = st
            found = True
            break
    if(found):
        print("YES")
        for ele in arr:
            print(ele)
    else:
        print("NO")
    

n = int(input())
arr = []
for i in range(n):
    st = input()
    arr.append(st)
func(arr)
