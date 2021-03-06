// STACK IMPLEMENTATION

// IMPLEMENTATION 2
#include <stdio.h>
#include <stdlib.h>

typedef int bool;

#define true 0
#define false 1

typedef struct node{
  struct node *next;
  void *data;
} node;

bool push(node **head, void *data);
bool pop(node **head, void **data);
bool create(node **head);
bool delete(node **head);
bool print(node **head);

int main(void){
  node *head;
  create(&head);

  int number1, number2, number3;
  void *data;

  number1 = 12;
  number2 = 23;
  number3 = 7;

  data = &number1;
  push(&head, data);
  data = &number2;
  push(&head, data);
  data = &number3;
  push(&head, data);

  pop(&head, &data);
  printf("%d\n", *(int*)data);

  print(&head);

  delete(&head);

  print(&head);

  return true;
}

bool push(node **head, void *data){
  node *temp;
  temp = malloc(sizeof(node));
  if(!temp){
    return false;
  }

  temp -> next = *head;
  temp -> data = data;

  *head = temp;
  return true;
}

bool pop(node **head, void **data){
  node *temp = *head;
  if (temp == NULL){
    return false;
  }

  *data = temp -> data;
  *head = temp -> next;
  free(temp);

  return true;
}

bool print(node **head){
  node *temp = *head;

  while(temp != NULL){
    printf("%i ", *(int*)temp -> data);
    temp = temp -> next;
  }

  return true;
}

bool create(node **head){
  *head = NULL;
  return true;
}

bool delete(node **head){
  node *next;
  while(*head){
    next = (*head) -> next;
    free(*head);
    *head = next;
  }

  return true;
}

// IMPLEMENTATION 1
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node{
//   struct node *next;
//   int data;
// } node;

// node *head;

// void push(int data);
// int pop(void);
// void print(void);

// int main(void){
//   head = NULL;
//   int x;
//   int i;

//   while(x != 4){
//     printf("\nEnter a Stack Command Number\n1. Push\n2. Pop\n3. Print\n4. Exit\nCommand: ");

//     scanf("%i", &x);

//     switch (x){
//       case 4:
//         printf("Exiting the Stack!\n");
//         return 0;
//       case 1:
//         printf("Enter a number: ");
//         scanf("%i", &i);
//         push(i);
//         printf("The number %i has been placed in the stack!\n", i);
//         break;
//       case 2:
//         printf("The stack outputted a value of %i\n", pop());
//         break;
//       case 3:
//         printf("The values in the stack are listed below:\n");
//         print();
//         break;
//     }
//   }
//   return 0;
// }

// void push(int data){
//   node *temp;
//   temp = malloc(sizeof(node));

//   temp -> data = data;
//   temp -> next = head;

//   head = temp;
// }

// int pop(void){
//   if(head == NULL){
//     printf("Stack Empty!\n");
//     return -1;
//   }
//   node *temp = head;

//   head = temp -> next;

//   int data = temp -> data;

//   free(temp);

//   return data;
// }

// void print(void){
//   if(head == NULL){
//     printf("Linked List Empty!\n");
//     return;
//   }
//   node *temp = head;
//   while(temp -> next != NULL){
//     printf("%i ", temp -> data);
//     temp = temp -> next;
//   }
//   printf("%i\n", temp -> data);
// }