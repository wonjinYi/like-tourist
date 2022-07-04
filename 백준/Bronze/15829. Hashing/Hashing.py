def cvt(ch):
  return ord(ch)-96
  
l = int(input())
s = input()
res = 0

for i in range(l):
  res += cvt(s[i])*(31**i)
res = res%1234567891
print(res)
