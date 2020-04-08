def gcd(a, b):
    if(b == 0):
        return a
    return gcd(b, a % b)

T = int(input())
while(T > 0):
    a, b = map(int, input().split())
    print("Infinite" if(gcd(a, b) != 1) else "Finite")
    T -= 1