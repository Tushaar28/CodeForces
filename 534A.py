n = int(input())
if(n == 1):
    print(1, 1, sep = '\n')
elif(n == 2):
    print(1, 1, sep = '\n')
elif(n == 3):
    print(2)
    print(1,3, sep = ' ')
elif(n == 4):
    print(4)
    print(3, 1, 4, 2, sep = ' ')
else:
    print(n)
    for i in range(1, n + 1, 2):
        print(i, end = ' ')
    for i in range(2, n + 1, 2):
        print(i, end = ' ')