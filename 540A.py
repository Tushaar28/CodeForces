def func(a, b):
    cnt = 0
    for i in range(n):
        x = ord(a[i]) - ord('0')
        y = ord(b[i]) - ord('0')
        cnt += min(abs(x - y), 10 - abs(x - y))
    return cnt;

n = int(input())
a = input()
b = input()
print(func(a, b))