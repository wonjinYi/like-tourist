arr = list(map(int, input().split()))
arr.sort()
if arr[0]==arr[1] and arr[0]==arr[2] and arr[1]==arr[2]:
  print(arr[0]*1000 + 10000)
elif arr[0]!=arr[1] and arr[0]!=arr[2] and arr[1]!=arr[2]:
  print(arr[2]*100)
elif arr[0]==arr[1] or arr[1]==arr[2]:
  print(arr[1]*100+1000)