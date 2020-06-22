n = int(input())

# If the number is even, then divide it by 2
# if the number is odd, then multiply by 3 and add one
# keep repeating until n == 1

while n != 1:
  print(n, end=" ")
  if n % 2 == 0:
    n //= 2
  else:
    n = (n * 3) + 1

print(n)
