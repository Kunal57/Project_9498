// Implement a Linked List in C

#include <stdio.h>
#include <stdlib.h>

struct node{
  int number;
  struct node *next;
};

int main(void){
  struct node *head;
  head = NULL;

  struct node *temp;
  temp = (struct node*) malloc(sizeof(struct node));

  temp -> number = 12;
  temp -> next = NULL;
  head = temp;

  temp = (struct node*) malloc(sizeof(struct node));

  temp -> number = 23;
  temp -> next = NULL;

  struct node *temp1 = head;
  while((temp1 -> next) != NULL){
    temp1 = temp1 -> next;
  }

  temp1 -> next = temp;

  temp = (struct node*) malloc(sizeof(struct node));

  temp -> number = 7;
  temp -> next = NULL;

  temp1 = head;
  while((temp1 -> next) != NULL){
    temp1 = temp1 -> next;
  }

  temp1 -> next = temp;

  temp1 = head;
  while(temp1 -> next != NULL){
    printf("%i\n", temp1 -> number);
    temp1 = temp1 -> next;
  }

  return 0;
}
