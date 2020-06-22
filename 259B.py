a, b, c = map(int, input().split())
d, e, f = map(int, input().split())
g, h, i = map(int, input().split())

a = (d + f + g + h - b - c) // 2
e = (b + c + g + h - d - f) // 2
i = (b + c + d + f - g - h) // 2
print(a, b, c, sep = " ")
print(d, e, f, sep = " ")
print(g, h , i, sep = " ")