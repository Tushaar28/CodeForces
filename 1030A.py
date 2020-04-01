def isEasy(n, arr):
    for ele in arr:
        if(ele == 1):
            return "HARD"
    return "EASY"

n = int(input())
arr = list(map(int, input().split()))
print(isEasy(n, arr))