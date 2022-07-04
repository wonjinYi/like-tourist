
t = int(input())
n = [1,2,3,4,5,6,7,8,9,10,11,12,13,14]
for i in range(t):
  floor = int(input())
  unit = int(input())

  n = [1,2,3,4,5,6,7,8,9,10,11,12,13,14]
  for j in range(floor):
    memo = 0
    for i in range(unit):
      n[i] = (memo+n[i])
      memo = n[i]
  print(n[unit-1])
      