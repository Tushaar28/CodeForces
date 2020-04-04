def func(a, b, k):
    if((k & 1) == 1):
        return a*((k//2)+1) - b*(k//2)
    return (a-b) * k//2

T = int(input())
while(T > 0):
    a, b, k = map(int, input().split())
    print(func(a, b, k))
    T -= 1