n, k = map(int, input().split())

a=1
b=1
c=1

for i in range(1, k+1):
  a*=i

for i in range(1, n-k+1):
  b*=i

for i in range(1, n+1):
  c*=i

print(c//(a*b))