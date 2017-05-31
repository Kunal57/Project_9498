// MAINTAIN LINKED LIST TAIL POINTER

#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 0
#define false 1

typedef struct node{
  struct node *next;
  void *data;
} node;

node *head;
node *tail;

bool push(void *number);
bool pop(void **number);
bool print(void);

int main(void){
  head = NULL;
  tail = NULL;

  int num = 12;
  int num2 = 23;
  int num3 = 7;
  int num4;

  push(&num);
  push(&num2);
  push(&num3);

  print();

  void *number;
  pop(&number);

  printf("%i\n", *(int*)number);

  print();

  pop(&number);
  pop(&number);

  // No Values inside the Linked List so Tail should be NULL
  printf("%i\n", tail == NULL);

  return true;
}

bool push(void *number){
  node *temp;
  temp = malloc(sizeof(node));
  if(!temp){
    return false;
  }

  temp -> data = number;
  temp -> next = head;

  head = temp;
  if(tail == NULL){
    tail = temp;
  }

  return true;
}

bool pop(void **number){
  if(head == NULL){
    return false;
  }

  node *temp = head;

  *number = temp -> data;

  head = temp -> next;

  free(temp);

  if(head == NULL){
    tail = NULL;
  }

  return true;
}

bool print(void){
  node *temp = head;

  while(temp != NULL){
    printf("%i ", *(int*)temp -> data);
    temp = temp -> next;
  }
  printf("\n");

  return true;
}