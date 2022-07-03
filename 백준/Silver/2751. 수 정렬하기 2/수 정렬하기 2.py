n = int(input())
l = []

for i in range(n):
  m = int(input())
  l.append(m)

l.sort()
for i in range(n):
  print(l[i])