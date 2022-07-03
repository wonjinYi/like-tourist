# a = list(map(int, input().split(' ')))
# for i in range(0,len(a),2):
#   print(a[i+1]//(a[i]+1))

try:
  while True:
    a, b = map(int, input().split())
    print(b//(a+1))
except:
  pass