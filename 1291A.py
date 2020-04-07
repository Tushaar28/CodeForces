T = int(input())
while(T > 0):
    n = int(input())
    num = int(input())
    arr = [int(x) for x in str(num)]
    odd = 0
    for ele in arr:
        if((ele & 1) == 1):
            odd += 1
    if(odd <= 1):
        print(-1)
    else:
        cnt = 0
        for ele in arr:
            if((ele & 1) == 1):
                print(ele, end = "")
                cnt += 1
            if(cnt == 2):
                break;
        print()
    T -= 1