import timeit

# # EXAMPLE 1
# def example1(array):
#   sum1 = 0
#   for x in range(len(array)):
#     sum1 += array[x]

#   product = 1
#   for y in range(len(array)):
#     product *= array[y]

#   print("%s, %s" % (sum1, product))

# t = timeit.timeit('example1([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example1', number=1000)
# print(t)
# # 0.03265321400249377
# # O(N)

# # EXAMPLE 2
# def example2(array):
#   for x in range(len(array)):
#     for y in range(len(array)):
#       print("%s, %s" % (array[x], array[y]))

# t = timeit.timeit('example2([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example2', number=1000)
# print(t)
# # 1.704131388978567
# # O(N^2)

# # EXAMPLE 3
# def example3(array):
#   for x in range(len(array)):
#     for y in range(x+1, len(array)):
#       print("%s, %s" % (array[x], array[y]))

# t = timeit.timeit('example3([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example3', number=1000)
# print(t)
# # 0.7609443860128522
# # O(N^2)

# # EXAMPLE 4
# def example4(arrayA, arrayB):
#   for x in range(len(arrayA)):
#     for y in range(len(arrayB)):
#       if arrayA[x] < arrayB[y]:
#         print("%s, %s" % (x, y))

# t = timeit.timeit('example4([1,2,3,4,5,6,7,8,9,10], [11,12,13,14,15,16,17,18,19,20])', setup='from __main__ import example4', number=1000)
# print(t)
# # 2.6925521480152383
# # O(ab)
# # Two separate inputs as arrays. This means that depending on the size of each array, it will execute more or less than O(N^2)

# # EXAMPLE 5
# def example5(arrayA, arrayB):
#   for x in range(len(arrayA)):
#     for y in range(len(arrayB)):
#       for z in range(10):
#         print("%s, %s" % (arrayA[x], arrayB[y]))

# t = timeit.timeit('example5([1,2,3,4,5,6,7,8,9,10], [11,12,13,14,15,16,17,18,19,20])', setup='from __main__ import example5', number=1000)
# print(t)
# # 25.03213724301895 (Long Time)
# # O(ab)

# # EXAMPLE 6
# def example6(array):
#   for x in range(int(len(array)/2)):
#     other = len(array) - x - 1
#     temp = array[x]
#     array[x] = array[other]
#     array[other] = temp

# t = timeit.timeit('example6([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example6', number=1000)
# print(t)
# # 0.0018980849999934435
# # O(N)

# EXAMPLE 7
# O(N + P), where P < N/2 == O(N)
# O(2N) == O(N)
# O(N + log N) == O(N)
# O(N + M) != O(N)

# # EXAMPLE 8
# def example8(array):
#   for x in range(len(array)):
#     # O(a * s log s)) to sort each string
#     array[x] = "".join(sorted(array[x]))
#   # O(s) for each string comparison & O(a log a) for each comparison
#   print(sorted(array))

# t = timeit.timeit('example8(["kunal", "patel", "elon", "musk"])', setup='from __main__ import example8', number=1000)
# print(t)
# # 0.022029696963727474
# # a * s(log a + log s), where a = length of array & s = length of string

# # EXAMPLE 9
# def example9(array):
#   if len(array) == 0:
#     return 0
#   else:
#     middle = int(len(array)/2)
#     return example9(array[:middle]) + array[middle] + example9(array[middle+1:])

# # The code touches each number in the tree once and does a constant time amount of work with each "touch" (excluding recursive calls)

# # Recursive Pattern
# # O(branches^depth), where # of branches is 2 & depth is log N
# # P = 2^log N
# # log2 P = log2 N
# # P = N
# # 2^log N = N

# t = timeit.timeit('example9([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example9', number=1000)
# print(t)
# # 0.010356953018344939
# # O(N), where N is the number of nodes

# # EXAMPLE 10
# def example10(number):
#   counter = 2
#   squared = 4
#   while (squared <= number):
#     if number % counter == 0:
#       return False
#     counter += 1
#     squared = counter * counter
#   return True

# t = timeit.timeit('example10(17)', setup='from __main__ import example10', number=1000)
# print(t)
# # 0.0005029190215282142
# # O(√n)

# # EXAMPLE 11
# def example11(number):
#   if number < 0:
#     return -1
#   elif number == 0:
#     return 1
#   else:
#     return number * example11(number - 1)

# t = timeit.timeit('example11(5)', setup='from __main__ import example11', number=1000)
# print(t)
# # 0.0010335730039514601
# # O(N)

# EXAMPLE 12
# # EXAMPLE 13
# def example13(number):
#   if number < 0:
#     return 0
#   elif number == 1:
#     return 1
#   else:
#     return example13(number - 1) + example13(number - 2)

# t = timeit.timeit('example13(15)', setup='from __main__ import example13', number=1000)
# print(t)
# # O(branches^depth)
# # 0.47616493998793885
# # O(2^N)

# # EXAMPLE 14
# def example14a(number):
#   for x in range(number + 1):
#     print("%s : %s" % (x, example14b(x)))

# def example14b(number):
#   if number <= 0:
#     return 0
#   elif number == 1:
#     return 1
#   else:
#     return example14b(number-1) + example14b(number-2)

# t = timeit.timeit('example14a(15)', setup='from __main__ import example14a', number=1000)
# print(t)
# # 1.2958954759524204
# # O(2^N)

# # EXAMPLE 15
# def example15a(number):
#   cache = []
#   for x in range(number + 1):
#     print("%s : %s" % (x, example15b(x, cache)))

# def example15b(number, cache):
#   if number <= 0:
#     return 0
#   elif number == 1:
#     return 1
#   elif len(cache) > number:
#     return cache[number]
#   else:
#     cache.append(example15b(number - 1, cache) + example15b(number - 2, cache))
#     return cache[-1]

# t = timeit.timeit('example15a(15)', setup='from __main__ import example15a', number=1000)
# print(t)
# # 0.5006287230062298
# # O(N)

# EXAMPLE 16
def example16(number):
  if number < 1:
    return 0
  elif number == 1:
    print("1")
    return 1
  else:
    prev = example16(int(number/2))
    curr = prev * 2
    print(curr)
    return curr

t = timeit.timeit('example16(50)', setup='from __main__ import example16', number=1000)
print(t)
# 0.03213428397430107
# O(log N)