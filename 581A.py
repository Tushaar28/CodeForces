def func(a, b):
    print(min(a, b), (max(a, b) - min(a, b)) // 2, sep = ' ')

a, b = map(int, input().split())
func(a, b)