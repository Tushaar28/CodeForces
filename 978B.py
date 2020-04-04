def func(st):
    cnt = 0
    for i in range(len(st)):
        if(st[i:i+3] == 'xxx'):
            cnt += 1
    return cnt

n = int(input())
st = input()
print(func(st))