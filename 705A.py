def func(n):
    i = 1
    res = ""
    while(i <= n):
        if(i == n):
            if(i % 2 == 0):
                res += "I love it "
            else:
                res += "I hate it "
            return res
        
        if(i % 2 == 0):
            res += "I love that "
        else:
            res += "I hate that "
        
        i+= 1
            
n = int(input())
print(func(n))