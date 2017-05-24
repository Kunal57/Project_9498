// STACK IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int number;
  struct node *next;
} node;

node *head;

void push(int number);
int pop(void);
void print(void);

int main(void){
  head = NULL;
  int x;
  int i;

  while(x != 4){
    printf("\nEnter a Stack Command Number\n1. Push\n2. Pop\n3. Print\n4. Exit\nCommand: ");

    scanf("%i", &x);

    switch (x){
      case 4:
        printf("Exiting the Stack!\n");
        return 0;
      case 1:
        printf("Enter a number: ");
        scanf("%i", &i);
        push(i);
        printf("The number %i has been placed in the stack!\n", i);
        break;
      case 2:
        printf("The stack outputted a value of %i\n", pop());
        break;
      case 3:
        printf("The values in the stack are listed below:\n");
        print();
        break;
    }
  }
  return 0;
}

void push(int number){
  node *temp;
  temp = malloc(sizeof(node));

  temp -> number = number;
  temp -> next = head;

  head = temp;
}

int pop(void){
  if(head == NULL){
    printf("Stack Empty!\n");
    return -1;
  }
  node *temp = head;

  head = temp -> next;

  int number = temp -> number;

  free(temp);

  return number;
}

void print(void){
  if(head == NULL){
    printf("Linked List Empty!\n");
    return;
  }
  node *temp = head;
  while(temp -> next != NULL){
    printf("%i ", temp -> number);
    temp = temp -> next;
  }
  printf("%i\n", temp -> number);
}