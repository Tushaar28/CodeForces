def func(n):
    while(True):
        n += 1
        s = str(n)
        se = set()
        for char in s:
            se.add(char)
        if(len(se) == len(s)):
            break
    return n

n = int(input())
print(func(n))