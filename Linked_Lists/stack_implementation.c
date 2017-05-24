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

  push(12);
  push(23);
  push(7);
  push(87);
  push(11);

  printf("%i\n", pop());
  printf("%i\n", pop());

  printf("\nLinked List Values:\n");
  print();

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