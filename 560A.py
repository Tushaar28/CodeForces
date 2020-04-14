n = int(input())
arr = list(map(int, input().split()))
found = False
for ele in arr:
    if(ele == 1):
        found = True
        break
if(found):
    print(-1)
else:
    print(1)