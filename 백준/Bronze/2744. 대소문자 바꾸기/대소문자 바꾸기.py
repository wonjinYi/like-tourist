a = input()
for i in range(len(a)):
  print(a[i].lower() if a[i].isupper() else a[i].upper(), end='')