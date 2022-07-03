a = input()
s = 0
for i in range(len(a)):
  n = int(a[i])
  s += n**5
print(s)