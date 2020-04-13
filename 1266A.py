n = int(input())
arr = []
res = []
for _ in range(n):
    x = input()
    arr.append(list(x))
for num in arr:
    # total = sum(num)
    z = 0
    total = 0
    e = 0
    for ele in num:
        total += ord(ele) - ord('0')
        if(ele == '0'):
            z += 1
        if((ord(ele) - ord('0')) % 2 == 0):
            e += 1
    if((total % 3 == 0) and z > 0 and e > 1):
        res.append("red")
    else:
        res.append("cyan")

for ele in res:
    print(ele)