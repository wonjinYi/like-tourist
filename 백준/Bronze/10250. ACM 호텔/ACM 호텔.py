t = int(input())
for i in range(t):
  h,w,n = map(int, input().split())
  a = n%h if n%h else h
  b = n//h + 1 if n%h!=0 else n//h
  print(f"{a}{'0'+str(b) if b<10 else b}")