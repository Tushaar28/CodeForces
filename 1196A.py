T = int(input())
while(T > 0):
    arr = list(map(int, input().split()))
    print(sum(arr) // 2)
    T -= 1