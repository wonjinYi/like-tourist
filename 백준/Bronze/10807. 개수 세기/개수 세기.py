n = int(input())
a = list(map(int, input().split()))
b = int(input())

s = 0
for i in range(n):
  if a[i]==b: s=s+1
print(s)
