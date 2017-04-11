# Write an efficient function to find the first non-repeated character in a string. For instance, the first non-repeated character in "total" is "o" and the first non-repeated character in "tweeter" is "r". Discuss the efficiency of your algorithm.

def firstNonRepeat(string):
  for x in range(len(string)):
    for y in range(len(string)):
      if string[x] == string[y] and x != y:
        break
      elif y + 1 == len(string):
        return string[x]


print(firstNonRepeat("teeter"))
# O(N^2)

