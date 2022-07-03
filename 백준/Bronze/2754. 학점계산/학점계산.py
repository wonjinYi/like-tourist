a = input()
b = a[0]
c = 0

if b=='A': c=4.0
elif b=='B': c=3.0
elif b=='C': c=2.0
elif b=='D': c=1.0
elif b=='F': c=0.0

if b!='F':
  d = a[1]
  if d=='+': c=c+0.3
  elif d=='-': c=c-0.3

print(c)
