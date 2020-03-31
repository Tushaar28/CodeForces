def minMoves(x, y):
    return min(sum(x), sum(y))

MAX = 101
n = int(input())
x = [0] * MAX
y = [0] * MAX
for i in range(n):
    a, b = map(int, input().split())
    x[a] = 1
    y[b] = 1
print(minMoves(x, y))