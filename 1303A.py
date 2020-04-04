T = int(input())
while(T > 0):
    n = input()
    print(n.strip('0').count('0'))
    T -= 1