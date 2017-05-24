// Recursive Print & Recursive Reverse Print a Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int number;
  struct node *next;
} node;

node *insert(node *head, int number);
void print(node *head);
void reversePrint(node *head);

int main(void){
  node *head = NULL;

  head = insert(head, 12);
  head = insert(head, 23);
  head = insert(head, 7);
  head = insert(head, 87);
  head = insert(head, 11);

  print(head);

  reversePrint(head);

  return 0;
}

node *insert(node *head, int number){
  node *temp;
  temp = malloc(sizeof(node));

  temp -> number = number;
  temp -> next = NULL;

  temp -> next = head;
  head = temp;

  return head;
}

void print(node *head){
  if(head == NULL){
    return;
  }
  printf("%i ", head -> number);
  print(head -> next);
}

void reversePrint(node *head){
  if(head == NULL){
    return;
  }
  reversePrint(head -> next);
  printf("%i ", head -> number);
}