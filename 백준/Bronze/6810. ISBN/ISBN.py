import math

n = 0

multiplier = 1
for digit in '9780921418':
    n += int(digit)*multiplier
    multiplier -= 4
    multiplier = abs(multiplier)

for i in range(3):
    n += int(input())*multiplier
    multiplier -= 4
    multiplier = abs(multiplier)

print(f'The 1-3-sum is {n}')
