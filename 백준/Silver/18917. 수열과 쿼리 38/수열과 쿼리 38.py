import sys
m = int(input())
arr = []

j = 0
k = 0
for i in range(m):
  #x = list(map(int, input().split()))
  x = list(map(int, (sys.stdin.readline().rstrip()).split()))
  a = x[0]
  b = x[1] if len(x) > 1 else -1

  if a==1:
    j+=b
    k=k^b
  elif a == 2:
    j-=b
    k=k^b
  elif a == 3:
    print(j)
  elif a == 4:
    print(k)
