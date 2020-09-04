arr = [-1,2,4,-3,5,2,-5,2]
expected = 10

# Kadane's algorithm
def maximum_subarray_sum(arr):
  n = len(arr)
  best = 0
  total = 0
  for i in range(0,n):
    total = max(arr[i], total + arr[i])
    best = max(best, total)
  return best

print("output:", maximum_subarray_sum(arr))
print("expected:", expected)
