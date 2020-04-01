def func(st):
    if(st[-2:] == 'po'):
        return "FILIPINO"
    elif(st[-4:] == 'desu' or st[-4:] == 'masu'):
        return "JAPANESE"
    else:
        return "KOREAN"
    
t = int(input())
while(t > 0):
    st = input()
    print(func(st))
    t -= 1