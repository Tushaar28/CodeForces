import math
def func(cups, medals, n):
    a = math.ceil(sum(cups) / 5)
    b = math.ceil(sum(medals) / 10)
    if(a + b <= n):
        return "YES"
    return "NO"

cups = list(map(int, input().split()))
medals = list(map(int, input().split()))
n = int(input())
print(func(cups, medals, n))