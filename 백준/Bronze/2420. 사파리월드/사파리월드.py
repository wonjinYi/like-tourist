a,b = map(int, input().split(' '))
c = a-b
print(c if c>=0 else -1*c)