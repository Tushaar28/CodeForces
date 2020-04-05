def func(st):
    for char in st:
        if(char == 'H' or char =='Q' or char == '9'):
            return "YES"
    return "NO"

st = input()
print(func(st))