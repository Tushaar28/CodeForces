n, k = map(int, input().split())
i = 0
while(i < k):
    print(n - i, end = " ")
    i += 1
i = 1
while(i <= n - k):
    print(i, end = " ")
    i += 1