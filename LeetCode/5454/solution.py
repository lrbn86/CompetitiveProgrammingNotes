from collections import Counter
from typing import *

def solve(arr: List[int], k: int) -> int:
  count = Counter(arr)
  sfreqs = sorted(count.values())
  ans = len(sfreqs)
  for freq in sfreqs:
    if k >= freq:
      k-= freq
      ans -= 1
  return ans;

arr = [5,5,4]
k = 1
answer = solve(arr, k)
print(answer)

arr = [4,3,1,1,3,3,2]
k = 2
answer = solve(arr, k)
print(answer)

