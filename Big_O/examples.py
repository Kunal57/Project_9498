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

# EXAMPLE 3
def example3(array):
  for x in range(len(array)):
    for y in range(x+1, len(array)):
      print("%s, %s" % (x, y))

t = timeit.timeit('example3([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example3', number=1000)
print(t)
# 0.7609443860128522
# O(N^2)

# EXAMPLE 4


# EXAMPLE 5
# EXAMPLE 6
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