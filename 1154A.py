def findNum(arr):
    s = max(arr)
    abc = s
    arr.remove(s)
    ab = arr[0]
    bc = arr[1]
    ca = arr[2]
    c = abc - ab
    b = abc - ca
    a = abc - bc
    print(a, b, c, sep = " ")

arr = list(map(int, input().split()))
findNum(arr)