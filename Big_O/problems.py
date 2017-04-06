# # PROBLEM 1
# def product(a, b):
#   sum = 0
#   for x in range(b):
#     sum += a
#   return sum

# print(product(8,10))
# # O(b)

# # PROBLEM 2
# def compute(a, b):
#   if b < 0:
#     return 0 # error
#   elif b == 0:
#     return 1
#   else:
#     return a * compute(a, b - 1)

# print(compute(3, 3))
# # O(b)

# # PROBLEM 3
# def remainder(a, b):
#   if b < 0:
#     return -1
#   else:
#     div = int(a / b)
#     return a - (div * b)

# print(remainder(33, 6))
# # O(1)

# # PROBLEM 4
# def divison(a, b):
#   count = 0
#   sum = b
#   while (sum <= a):
#     sum += b
#     count += 1
#   return count

# print(divison(100, 10))
# # O(a/b)

# # PROBLEM 5
# def squareRoot(number, max, min):
#   print(number, max, min)
#   if max < min:
#     return -1 # No perfect square

#   mid = int((max - min)/2) + min
#   guess = mid * mid

#   if guess == number:
#     return mid # Perfect square
#   elif guess > number:
#     return squareRoot(number, mid - 1, min)
#   elif guess < number:
#     return squareRoot(number, max, mid + 1)

# print(squareRoot(225, 225, 0))
# # O(log n)

# # PROBLEM 6
# def squareRoot(number):
#   count = 1
#   while (count * count) < number:
#     count += 1
#     if count * count == number:
#       return count # Perfect square
#   return -1 # No perfect square

# print(squareRoot(226))
# # O(√n)

# # PROBLEM 7
# # O(n)

# # PROBELM 8
# # O(n)

# # PROBLEM 9
# def copyArray(array):
#   copy = []
#   copy.append(array[0])
#   for x in range(1, len(array)):
#     copy = appendToNew(copy, array[x])
#   return copy

# def appendToNew(array, value):
#   bigger = []
#   for x in range(len(array)):
#     bigger.append(array[x])

#   bigger.append(value)
#   return bigger

# print(copyArray([1,2,3,4,5,6,7,8,9,10]))

# # PROBLEM 10
# def sumDigits(number):
#   sum = 0
#   while (number > 0):
#     print(sum, number)
#     sum += number % 10
#     number = int(number / 10)
#   return sum

# print(sumDigits(111))

# PROBLEM 11
charCount = 26

def printSortedStrings(remaining, prefix):
  if remaining == 0:
    if isInOrder(prefix):
      print(prefix)
  else:
    for x in range(charCount):
      character = ithLetter(x)
      printSortedStrings(remaining - 1, prefix + character)

def isInOrder(string):
  for x in range(len(string)):
    curr = string[x]
    prev = string[x - 1]
    if prev > curr:
      return False
  return True

def ithLetter(i):
  return chr(ord("a") + i)

print(printSortedStrings(4, ""))