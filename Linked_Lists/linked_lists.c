// Implement a Linked List in C


// INSERT AT NTH POSITION & PRINT FUNCTIONS
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int number;
  struct node *next;
} node;

void insert(int position, int number);
void print();

node *head;

int main(void){
  head = NULL;
  int i, x, k, e;

  printf("Amount of Numbers: ");
  scanf("%i", &i);

  for(x = 0; x < i; x++){
    printf("Position & Number: ");
    scanf("%i %i", &k, &e);
    insert(k, e);
    print();
  }

  return 0;
}

void insert(int position, int number){
  node *temp;
  temp = malloc(sizeof(node));

  temp -> number = number;
  temp -> next = NULL;

  if(position == 0){
    temp -> next = head;
    head = temp;
  }
  else{
    node *temp1 = head;

    for(int i = 0; i < position - 1; i++){
      printf("%i\n", temp1 -> number);
      temp1 = temp1 -> next;
    }
    temp -> next = temp1 -> next;
    temp1 -> next = temp;
  }
}

void print(){
  node *temp = head;
  while(temp -> next != NULL){
    printf("%i ", temp -> number);
    temp = temp -> next;
  }
  printf("%i\n", temp -> number);
}


// INSERT & PRINT FUNCTIONS
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node{
//   int number;
//   struct node *next;
// } node;

// void insert(int number);
// void print();

// node *head;

// int main(void){

//   head = NULL;
//   int i, x, k;

//   printf("Amount of Numbers: \n");
//   scanf("%i", &i);

//   for(x = 0; x < i; x++){
//     printf("Number: ");
//     scanf("%i", &k);
//     insert(k);
//     print();
//   }

//   return 0;
// }

// void insert(int number){
//   node *temp;
//   temp = malloc(sizeof(node));

//   temp -> number = number;
//   temp -> next = head;

//   head = temp;
// }

// void print(){
//   node *temp;
//   temp = head;

//   while(temp -> next != NULL){
//     printf("%i ", temp -> number);
//     temp = temp -> next;
//   }

//   printf("%i\n", temp -> number);
// }
