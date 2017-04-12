# Write an efficient function that deletes characters from an ASCII string. Use the prototype:
# string removeChars(string str, string remove)
# where any characters existing in remove must be deleted from str. For example, given a str of "Battle of the Vowels: Hawaii vs. Grozny" and a remove of "aeiou", the function should transform str to "Bttl f th Vwls: Hw vs. Grzny".
# Justify any design decisions you make, and discuss the efficiency of your solution.

def removeCharacters(string, removeChars):
  for z in range(len(string[:])):
    if string[z].lower() not in removeChars:
      string += string[z]

  return string


print(removeCharacters("Battle of the Vowels: Hawaii vs. Grozny", "aeiou"))
# O(n)
