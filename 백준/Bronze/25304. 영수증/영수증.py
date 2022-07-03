s = int(input())
n = int(input())

a=0
for i in range(n):
  b, bb = map(int, input().split())
  a += b*bb

print('Yes' if s==a else 'No')