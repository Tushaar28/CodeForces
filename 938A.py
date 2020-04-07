def makeSafe(arr):
    done = False
    while(not done):
        index = []
        if(len(arr) == 1):
            return arr
        for i in range(len(arr)-1):
            global s
            if(arr[i] in s and arr[i+1] in s):
                index.append(i+1)
                break
        else:
            done = True
        if(len(index) > 0):
            arr.pop(index[0])
    return arr

def func(arr):
    arr = makeSafe(arr)
    return ''.join(arr)
    
s = {'a', 'e', 'i', 'o', 'u', 'y'}
n = int(input())
st = input()
arr = []
for char in st:
    arr.append(char)
print(func(arr))