# # PROBLEM 1
# def product(a, b):
#   sum = 0
#   for x in range(b):
#     sum += a
#   return sum

# print(product(8,10))
# # O(N)

# PROBLEM 2
def compute(a, b):
  if b < 0:
    return 0 # error
  elif b == 0:
    return 1
  else:
    return a * compute(a, b - 1)

print(compute(3, 3))
# O(N)