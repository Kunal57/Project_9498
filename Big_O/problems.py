# PROBLEM 1
def product(a, b):
  sum = 0
  for x in range(b):
    sum += a
  return sum

print(product(8,10))
# O(N)