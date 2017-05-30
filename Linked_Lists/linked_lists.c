// Implement a Linked List in C

// Insert, Delete, and Print Functions
// Functions return a boolean and alter the head & data pointer
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  struct node *next;
  int data;
} node;

typedef int bool;

#define true 0
#define false 1

bool insert(node **head, int *data);
bool delete(node **head, int **data);
bool print(node **head);

int main(void){
  node *head = NULL;
  int number;
  int *data = &number;

  number = 12;
  insert(&head, data);
  number = 23;
  insert(&head, data);

  delete(&head, &data);
  print(&head);

  return true;
}

bool insert(node **head, int *data){
  node *temp;

  temp = malloc(sizeof(node));
  if(!temp){
    return false;
  }

  temp -> data = *data;
  temp -> next = *head;

  *head = temp;
  return true;
}

bool delete(node **head, int **data){
  node *temp = *head;

  *data = &temp -> data;

  *head = temp -> next;
  free(temp);

  return true;
}

bool print(node **head){
  node *temp = *head;

  while(temp -> next != NULL){
    printf("%i ", temp -> data);
    temp = temp -> next;
  }
  printf("%i\n", temp -> data);

  return true;
}

// DELETE, INSERT, AND PRINT FUNCTIONS
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node{
//   int number;
//   struct node *next;
// } node;

// node *head;

// void insert(int number);
// void print(void);
// void delete(int position);

// int main(void){
//   head = NULL;

//   insert(12);
//   insert(23);
//   insert(7);
//   insert(87);
//   insert(11);
//   insert(2);

//   delete(4);
//   delete(3); // 2 11 87 12

//   print();

//   return 0;
// }

// void insert(int number){
//   node *temp;
//   temp = malloc(sizeof(node));

//   temp -> number = number;
//   temp -> next = NULL;

//   temp -> next = head;
//   head = temp;
// }

// void print(void){
//   node *temp = head;

//   while(temp -> next != NULL){
//     printf("%i ", temp -> number);
//     temp = temp -> next;
//   }
//   printf("%i\n", temp -> number);
// }

// void delete(int position){
//   node *temp = head;

//   for(int i = 0; i < position - 1; i++){
//     temp = temp -> next;
//   }

//   node *temp2 = temp -> next;

//   temp -> next = temp2 -> next;
//   free(temp2);
// }

// INSERT AT NTH POSITION & PRINT FUNCTIONS
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node{
//   int number;
//   struct node *next;
// } node;

// void insert(int position, int number);
// void print();

// node *head;

// int main(void){
//   head = NULL;
//   int i, x, k, e;

//   printf("Amount of Numbers: ");
//   scanf("%i", &i);

//   for(x = 0; x < i; x++){
//     printf("Position & Number: ");
//     scanf("%i %i", &k, &e);
//     insert(k, e);
//     print();
//   }

//   return 0;
// }

// void insert(int position, int number){
//   node *temp;
//   temp = malloc(sizeof(node));

//   temp -> number = number;
//   temp -> next = NULL;

//   if(position == 0){
//     temp -> next = head;
//     head = temp;
//   }
//   else{
//     node *temp1 = head;

//     for(int i = 0; i < position - 1; i++){
//       printf("%i\n", temp1 -> number);
//       temp1 = temp1 -> next;
//     }
//     temp -> next = temp1 -> next;
//     temp1 -> next = temp;
//   }
// }

// void print(){
//   node *temp = head;
//   while(temp -> next != NULL){
//     printf("%i ", temp -> number);
//     temp = temp -> next;
//   }
//   printf("%i\n", temp -> number);
// }


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
