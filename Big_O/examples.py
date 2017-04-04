import timeit

# # EXAMPLE 1
# def example1(array):
#   sum1 = 0
#   for num in array:
#     sum1 += num

#   product = 1
#   for num in array:
#     product *= num

#   print("%s, %s" % (sum1, product))

# t = timeit.timeit('example1([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example1', number=1000)
# print(t)
# # 0.02430102601647377
# # O(N)

# # EXAMPLE 2
# def example2(array):
#   for num in array:
#     for nums in array:
#       print("%s, %s" % (num, nums))

# t = timeit.timeit('example2([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example2', number=1000)
# print(t)
# # 1.740927321021445
# # O(N^2)

# # EXAMPLE 3
# def example3(array):
#   for x in range(len(array)):
#     for y in range(x+1, len(array)):
#       print("%s, %s" % (x, y))

# t = timeit.timeit('example3([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example3', number=1000)
# print(t)
# # 0.7609443860128522
# # O(N^2)

# # EXAMPLE 4
# def example4(arrayA, arrayB):
#   for x in range(len(arrayA)):
#     for y in range(len(arrayB)):
#       if x < y:
#         print("%s, %s" % (x, y))

# t = timeit.timeit('example4([1,2,3,4,5,6,7,8,9,10], [11,12,13,14,15,16,17,18,19,20])', setup='from __main__ import example4', number=1000)
# print(t)
# # 1.1923439019592479
# # O(ab)
# # Two separate inputs as arrays. This means that depending on the size of each array, it will execute more or less than O(N^2)

# # EXAMPLE 5
# def example5(arrayA, arrayB):
#   for x in range(len(arrayA)):
#     for y in range(len(arrayB)):
#       for z in range(100):
#         print("%s, %s" % (x, y))

# t = timeit.timeit('example5([1,2,3,4,5,6,7,8,9,10], [11,12,13,14,15,16,17,18,19,20])', setup='from __main__ import example5', number=1000)
# print(t)
# # 271.52756373700686 (Long Time)
# # O(ab)

# EXAMPLE 6
def example6(array):
  for x in range(int(len(array)/2)):
    other = len(array) - x - 1
    temp = array[x]
    array[x] = array[other]
    array[other] = temp


t = timeit.timeit('example6([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example6', number=1000)
print(t)
# 0.0018980849999934435
# O(N)

# EXAMPLE 7
# EXAMPLE 8
# EXAMPLE 9
# EXAMPLE 10
# EXAMPLE 11
# EXAMPLE 12
# EXAMPLE 13
# EXAMPLE 14
# EXAMPLE 15
# EXAMPLE 16