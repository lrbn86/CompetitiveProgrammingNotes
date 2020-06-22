n = int(input())
nums = sorted([int(x) for x in input().split()]) # Time complexity: O(nlogn)

i = 1

# Time complexity: O(n)
for num in nums:
  if i != num:
    break;
  i += 1

print(i)


# Since the worst case is 10^5 inputs, we must do linear time.

# We cannot do using the 'in' operator because this 'in' is time complexity of O(n)
# If we need a loop to check if it's 'in', then complexity would be O(n^2)

