a = list(map(int, input().split(' ')))
s = 0
for i in range(5):
  s += a[i]*a[i]
print(s%10)