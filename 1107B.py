T = int(input())
while(T):
    k, x = map(int, input().split())
    print(9 * (k - 1) + x)
    T -= 1