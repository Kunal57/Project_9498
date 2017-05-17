// Write an efficient function to find the first non-repeated character in a string. For instance, the first non-repeated character in "total" is "o" and the first non-repeated character in "tweeter" is "r". Discuss the efficiency of your algorithm.

#include <stdio.h>

struct hashtable{
  int letter;
  int freq;
};

int nonrepeat_character(char word[]);

int main(void){

  char word[] = "teeter";

  printf("%c\n", nonrepeat_character(word));

  return 0;
}

int nonrepeat_character(char word[]){

  struct hashtable alpha[26];
  for(int z = 0; z < 26; z++){
    alpha[z].letter = 'a' + z;
    alpha[z].freq = 0;
  }

  for(int i = 0; word[i] != '\0'; i++){
    int index = word[i] - 'a';

    if((alpha[index].letter) == word[i]){
      alpha[index].freq += 1;
    }
  }

  for(int x = 0; word[x] != '\0'; x++){
    int index = word[x] - 'a';

    if((alpha[index].freq) == 1){
      return alpha[index].letter;
    }
  }

  return -1;
}