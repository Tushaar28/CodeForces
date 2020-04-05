x = [input() for i in range(4) ]
d = int(input())
print ( len( set( [i  for i in range(1, d+1) for j in x if (i%int(j)==0) ] ) ) )