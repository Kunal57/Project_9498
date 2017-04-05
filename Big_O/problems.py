# # PROBLEM 1
# def product(a, b):
#   sum = 0
#   for x in range(b):
#     sum += a
#   return sum

# print(product(8,10))
# # O(N)

# # PROBLEM 2
# def compute(a, b):
#   if b < 0:
#     return 0 # error
#   elif b == 0:
#     return 1
#   else:
#     return a * compute(a, b - 1)

# print(compute(3, 3))
# # O(N)

# # PROBLEM 3
# def remainder(a, b):
#   if b < 0:
#     return -1
#   else:
#     div = int(a / b)
#     return a - (div * b)

# print(remainder(33, 6))
# # O(1)

# PROBLEM 4
def divison(a, b):
  count = 0
  sum = b
  while (sum <= a):
    sum += b
    count += 1
  return count

print(divison(100, 10))
# O(N)