// Implement a Function to Reverse a Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int number;
  struct node *next;
} node;

typedef int bool;
#define true 0
#define false 1

node *head;

void insert(int number);
void print(void);
void delete(int position);
bool reverse(node **head);

int main(void){
  head = NULL;

  insert(12);
  insert(23);
  insert(7);
  insert(87);
  insert(11);

  print();

  delete(1);
  delete(0);

  print();

  insert(87);
  insert(11);

  reverse(&head);

  print();

  return 0;
}

void insert(int number){
  node *temp;
  temp = malloc(sizeof(node));

  temp -> number = number;
  temp -> next = NULL;

  temp -> next = head;
  head = temp;
}

void print(void){
  node *temp = head;

  while(temp -> next != NULL){
    printf("%i ", temp -> number);
    temp = temp -> next;
  }
  printf("%i\n", temp -> number);
}

void delete(int position){
  node *temp = head;
  if(position == 0){
    head = temp -> next;
    free(temp);
  }
  else{
    for(int i = 0; i < position - 1; i++){
      temp = temp -> next;
    }
    node *next = temp -> next;
    temp -> next = next -> next;
    free(next);
  }
}

bool reverse(node **head){
  node *prev, *current, *next;

  current = *head;
  prev = NULL;

  while(current != NULL){
    next = current -> next;
    current -> next = prev;
    prev = current;
    current = next;
  }

  *head = prev;
  return true;
}