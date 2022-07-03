vk, jk = map(int, input().split())
vl, jl = map(int, input().split())
vh, dh, jh = map(int, input().split())

a = vk*jk
b = vl*jl
c = vh*dh*jh

x = a*c
y = b*c
print(x+y)