def func(n, m, k):
    if(m >= n and k >= n):
        return "Yes"
    return "No"

n ,m, k = map(int, input().split())
print(func(n, m, k))