n = int(input())
if((n & 1) == 0):
    print(n // 2)
else:
    print(-(n + 1) // 2)