import timeit

# EXAMPLE 1
def example1(array):
  sum1 = 0
  for num in array:
    sum1 += num

  product = 1
  for num in array:
    product *= num

  print("%s, %s" % (sum1, product))

# 0.02430102601647377
t = timeit.timeit('example1([1,2,3,4,5,6,7,8,9,10])', setup='from __main__ import example1', number=1000)
print(t)

# EXAMPLE 2
# EXAMPLE 3
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