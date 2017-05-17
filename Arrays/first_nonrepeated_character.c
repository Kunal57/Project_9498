// Write an efficient function to find the first non-repeated character in a string. For instance, the first non-repeated character in "total" is "o" and the first non-repeated character in "tweeter" is "r". Discuss the efficiency of your algorithm.

#include <stdio.h>

struct hashtable{
  int letter;
  int freq;
};

int nonrepeat_character(char word[]);

int main(void){

  char word[] = "teeter";

  printf("%c\n", nonrepeat_character(word[]));

  retunr 0;
}

int nonrepeat_character(char word[]){

  struct hashtable alpha[26];

  for(int i = 0; word[i] != '\0', i++){
    int index = word[i] - 'a';

    if((alpha[index] -> freq) < 1){
      alpha[index] -> letter = word[i];
      alpha[index] -> freq = 1;
    }
    else if((alpha[index] -> freq) > 0){
      alpha[index] -> freq += 1;
    }
  }

  for(int x = 0; x < 26; x++){
    if((alpha[x] -> freq) == 1){
      return alpha[x] -> letter;
    }
  }

  return -1;
}