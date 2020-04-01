def func(st):
    if(st[0] == 'S' and st[-1] == 'F'):
        return "YES"
    else:
        return "NO"

n = int(input())
st = input()
print(func(st))