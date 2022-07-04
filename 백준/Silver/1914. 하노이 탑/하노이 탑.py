def hanoi(n, start, aux, end):
  if n==1:
    print(start, end)
  else:
    hanoi(n-1, start, end, aux)
    print(start, end)
    hanoi(n-1, aux, start, end)

n = int(input())
print((2**n)-1)
if n<=20:
  hanoi(n, 1,2,3)