r, c = map(int, input().split())
arr = []
for _ in range(r):
    arr.append(list(input()))
flag = True   
for i in range(r):
    if(flag):
        for j in range(c):
            if(arr[i][j] == 'S'):
                if(j + 1 < c and arr[i][j+1] == 'W'):
                    print("NO")
                    flag = False
                    break
                elif(j -1 >= 0 and arr[i][j-1] == 'W'):
                    print("NO")
                    flag = False
                    break
                elif(i -1 >= 0 and arr[i-1][j] == 'W'):
                    print("NO")
                    flag = False
                    break
                if(i + 1 < r and arr[i+1][j] == 'W'):
                    print("NO")
                    flag = False
                    break
if(flag == True):
    print("YES")
    for i in range(r):
        for j in range(c):
            if(arr[i][j] == '.'):
                arr[i][j] = 'D'
            print(arr[i][j], end = "")
        print()