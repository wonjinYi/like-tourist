n = int(input())
a = []
for i in range(n):
  arr = list(map(int, input().split()))
  a.append(arr)
a.sort()
#a.sort(key=lambda x: (x[0], x[1]))
for row in a:
  print(row[0], row[1])