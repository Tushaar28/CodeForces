n = int(input())
p = list(map(int, input().split()))
q = list(map(int, input().split()))
p.pop(0)
q.pop(0)
s = set()
for ele in p:
    s.add(ele)
for ele in q:
    s.add(ele)
if(len(s) == n):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")