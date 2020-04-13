a = int(input())
b = int(input())
c = int(input())
op1 = (a + b) * c
op2 = (a * b) + c
op3 = a + (b * c)
op4 = a * b * c
op5 = a + b + c
op6 = a * (b + c)
print(max(op6, max(op1, max(max(op2, op3), max(op4, op5)))))