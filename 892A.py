n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
rem = []
b = sorted(b)
b = b[::-1]
cap = b[0] + b[1]
total = 0
for ele in a:
    total += ele
if(cap >= total):
    print("YES")
else:
    print("NO")