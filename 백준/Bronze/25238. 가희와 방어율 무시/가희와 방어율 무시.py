a, b = map(int, input().split())

a = int(a*((100-b)/100))
print(0 if a>=100 else 1)