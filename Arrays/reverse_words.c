// Write a function that reverses the order of the words in a string. For example, your function should transform the string "Do or do not, there is no try." to "try. no is there not, do or Do". Assume that all the words are space delimited and treat  punctuation the same as letters.

#include <stdio.h>
#include <string.h>

void reverseString(char s[]);
void reverseWords(char s[]);

int main(void){
  char s[] = "Hello This is a String.";

  reverseString(s);

  reverseWords(s);

  printf("%s\n", s);

  return 0;
}

void reverseString(char s[]){
  int length = strlen(s) - 1;

  for(int i = 0; i < length/2 + 1; i++){
    int temp = s[i];
    s[i] = s[length - i];
    s[length - i] = temp;
  }
}

void reverseWords(char s[]){
  int length = strlen(s);
  int start = 0;

  for(int i = 0; i <= length; i++){
    if(s[i] == ' ' || s[i] == '\0'){
      int mid = (i - start) / 2;
      for(int x = 1; x < mid + 1; x++){
        int temp = s[start];
        s[start] = s[i - x];
        s[i - x] = temp;
        start++;
      }
      start = i + 1;
    }
  }
}