// Implement a Linked List in C

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int number;
  struct node *next;
} node;

node *addToList(node *head, int number);

int main(void){
  node *head;
  head = NULL;

  head = addToList(head, 12);
  head = addToList(head, 23);
  head = addToList(head, 7);
  head = addToList(head, 87);
  head = addToList(head, 11);

  node *temp1 = head;
  temp1 = head;

  while(temp1 -> next != NULL){
    printf("%i\n", temp1 -> number);
    temp1 = temp1 -> next;
  }
  printf("%i\n", temp1 -> number);

  return 0;
}

node *addToList(node *head, int number){
  node *temp;
  temp = (node *) malloc(sizeof(node));

  temp -> number = number;
  temp -> next = NULL;

  if(head == NULL){
    return temp;
  }
  else{
    node *temp1 = head;
    while(temp1 -> next != NULL){
      temp1 = temp1 -> next;
    }
    temp1 -> next = temp;
  }

  return head;
}