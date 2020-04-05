def isDivisible(n):
    total = 0
    while(n > 0):
        d = n % 10
        total += d
        n //= 10
    return (total % 4 == 0)

def func(n):
    while(isDivisible(n) == False):
        n += 1
    return n

n = int(input())
print(func(n))