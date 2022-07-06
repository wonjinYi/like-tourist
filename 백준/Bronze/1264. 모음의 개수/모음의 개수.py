a = ''
while a != '#':
  a = input()
  if a=='#': break
  
  cnt = 0
  for ch in a:
    if ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U':
      cnt+=1
  print(cnt)