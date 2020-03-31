def validateExp(a, b, c):
    len_a = len(a)
    len_b = len(b)
    len_c = len(c)
    lhs = len_a + len_b
    res = ""
    
    if(lhs == len_c):
        res += a + "+" + b + "=" + c
        return res;
    
    if(abs(lhs - len_c) != 2):
        return "Impossible"
    
    elif(lhs > len_c):
        if(len_a > 1):
            len_a -= 1
        else:
            len_b -= 1
        len_c += 1
        for i in range(len_a):
            res += '|'
        res += "+"
        for i in range(len_b):
            res += '|'
        res += "="
        for i in range(len_c):
            res += "|"
    
    elif(len_c > lhs):
        len_c -= 1
        len_a += 1
        for i in range(len_a):
            res += '|'
        res += "+"
        for i in range(len_b):
            res += '|'
        res += "="
        for i in range(len_c):
            res += "|"
    
    return res
        
exp = input()
exps = exp.split("+")
a = exps[0]
exps1 = exps[1].split("=")
b = exps1[0]
c = exps1[1] 
print(validateExp(a, b, c))