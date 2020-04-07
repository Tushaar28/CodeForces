T = int(input())
while(T > 0):
    n = int(input())
    p = list(map(int, input().split()))
    q = list(map(int, input().split()))
    q_o, q_e, p_o, p_e = 0, 0, 0, 0
    for i, j in zip(p, q):
        if((i & 1) == 0):
            p_e += 1
        else:
            p_o += 1
        if((j & 1) == 1):
            q_o += 1
        else:
            q_e += 1
    print((p_o * p_e) + (q_o * q_e))
    T -= 1