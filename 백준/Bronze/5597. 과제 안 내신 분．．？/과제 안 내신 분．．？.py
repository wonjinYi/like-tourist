a = []
for i in range(28):
  a.append(int(input()))

for i in range(1, 31):
  if i not in a:
    print(i)