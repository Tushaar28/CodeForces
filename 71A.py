T = int(input())
while(T > 0):
    n = input()
    print(n if len(n) <= 10 else n[0]+str(len(n)-2)+n[-1])
    T -= 1