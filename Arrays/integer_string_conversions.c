// Write two conversion routines. The first routine converts a string to a signed integer. You may assume that the string contains only digits and the minus character('-'), that it is a properly formatted integer number, and that the number is within the range of an int type. The second routine converts a signed integer stored as an int back to a string.

#include <stdio.h>
#include <string.h>

int stringToInt(char s[]);

int main(void){
  char number[] = "-1234";
  int num;

  num = stringToInt(number);

  printf("%i\n", num);

  return 0;
}

int stringToInt(char s[]){
  int number = 0;
  int length = strlen(s);
  int sign = 1;

  for(int i = 0; i < length; i++){
    if(s[i] == '-'){
      sign = -1;
    }
    else{
      int num = s[i] - '0';
      number *= 10;
      number += num;
    }
  }
  return number * sign;
}

// My WhiteBoard Solution
// int stringToInt(char s[]){
//   int number = 0;
//   int length = strlen(s) - 1;
//   int sign = 1;
//   int place = 1;

//   for(int i = length; i >= 0; i--){
//     if(s[i] == '-'){
//       sign = -1;
//     }
//     else{
//       int num = s[i] - '0';
//       number += place * num;
//       place *= 10;
//     }
//   }
//   return number * sign;
// }