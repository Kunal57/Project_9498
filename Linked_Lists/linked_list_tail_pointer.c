// MAINTAIN LINKED LIST TAIL POINTER

#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 0
#define false 1

typedef struct node{
  struct node *next;
  int data;
} node;

node *head;
node *tail;

bool push(int data);
bool pop(int *data);
bool insertAfter(int data, int newData);
bool print(void);

int main(void){
  head = NULL;
  tail = NULL;

  push(12);
  push(23);
  push(7);

  insertAfter(12, 11);
  insertAfter(7, 2);
  insertAfter(23, 0);

  int num;
  pop(&num);

  printf("%i\n", num);

  print();

  return true;
}

bool push(int data){
  node *temp;
  temp = malloc(sizeof(node));
  if(!temp){
    return false;
  }

  temp -> data = data;
  temp -> next = head;

  head = temp;
  if(tail == NULL){
    tail = temp;
  }

  return true;
}

bool pop(int *data){
  if(head == NULL){
    return false;
  }

  node *temp = head;

  *data = temp -> data;

  head = temp -> next;

  free(temp);

  if(head == NULL){
    tail = NULL;
  }

  return true;
}

bool insertAfter(int data, int newData){
  node *temp;
  temp = malloc(sizeof(node));
  if(!temp){
    return false;
  }
  temp -> next = NULL;
  temp -> data = newData;

  node *temp2 = head;
  while(temp2 -> data != data){
    temp2 = temp2 -> next;
    if(temp2 == NULL){
      head = temp;
      return true;
    }
  }
  temp -> next = temp2 -> next;
  temp2 -> next = temp;

  if(temp2 -> next == NULL){
    tail = temp;
  }

  return true;
}

bool print(void){
  node *temp = head;

  while(temp != NULL){
    printf("%i ", temp -> data);
    temp = temp -> next;
  }
  printf("\n");

  return true;
}