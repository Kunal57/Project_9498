// # Write an efficient function that deletes characters from an ASCII string. Use the prototype:
// # string removeChars(string str, string remove)
// # where any characters existing in remove must be deleted from str. For example, given a str of "Battle of the Vowels: Hawaii vs. Grozny" and a remove of "aeiou", the function should transform str to "Bttl f th Vwls: Hw vs. Grzny".
// # Justify any design decisions you make, and discuss the efficiency of your solution.
#include <stdio.h>

char *removeChars(char s[], char r[]);

int main(void){

  char s[] = "battle of the vowels: hawaii vs. gronzy";
  char r[] = "aeiou";

  removeChars(s, r);

  printf("%s\n", s);

  return 0;
}

char *removeChars(char s[], char r[])
{
  int index;
  char alpha[26];
  int k = 0;


  for(int i = 0; i < 26; i++){
    alpha[i] = 0;
  }

  for(int x = 0; r[x] != '\0'; x++){
    index = r[x] - 'a';
    alpha[index] = 1;
  }

  for(int z = 0; s[z] != '\0'; z++){
    index = s[z] - 'a';
    if(s[z] < 'a' || s[z] > 'z'){
      s[k++] = s[z];
    }
    else if(alpha[index] == 0)
    {
      s[k++] = s[z];
    }
  }
  s[k] = '\0';

  return s;
}
