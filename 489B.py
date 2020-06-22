n = int(input())
boys = sorted(list(map(int, input().split())))
m = int(input())
girls = sorted(list(map(int, input().split())))
i, j, ans = 0, 0, 0
while(i < n and j < m):
    if(abs(boys[i] - girls[j]) <= 1):
        ans += 1;
        i += 1
        j += 1
    elif(boys[i] < girls[j]):
        i += 1
    else:
        j += 1

print(ans)
