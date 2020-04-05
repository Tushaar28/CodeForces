n = int(input())
arr = list(map(int, input().split()))
odd_pos = 0
for ele in arr:
    odd_pos += (ele & 1)
print(min(odd_pos, n - odd_pos))