dna = input()
result = 0;
count = 0;

i = 0
j = 0

word = ""

while i < len(dna) - 1:

  while dna[i] == dna[j]:
    count += 1
    j += 1
    word += dna[j]
  print("Word:", word, "Count:", count)
  if dna[i] != dna[j]:
    i += 1
  else:
    i = j
    count = 0
    word = ""
    result = max(result, count)


print(result)
