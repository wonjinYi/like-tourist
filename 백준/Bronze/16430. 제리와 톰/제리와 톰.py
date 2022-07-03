a,b = map(int, input().split())

a= b-a

while b%a==0 and a!=1:
  b//=a
  a//=a
print(a,b)