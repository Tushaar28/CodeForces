def countFaces(arr):
    cnt = 0
    for ele in arr:
        if(ele == "Icosahedron"):
            cnt += 20
        elif(ele == "Cube"):
            cnt += 6
        elif(ele == "Octahedron"):
            cnt += 8
        elif(ele == "Dodecahedron"):
            cnt += 12
        else:
            cnt += 4
    return cnt

n = int(input())
arr = [""] * n
for i in range(n):
    arr[i] = input()

print(countFaces(arr)) 