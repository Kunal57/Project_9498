// Implement a Function to Reverse a Linked List
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int number;
  struct node *next;
} node;

node *head;

void insert(int number);
void print(void);
void reverse(void);

int main(void){
  head = NULL;

  insert(12);
  insert(23);
  insert(7);
  insert(87);
  insert(11);
  insert(2);

  reverse();

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

void reverse(void){
  node *prev, *current, *next;
  current = head;
  prev = NULL;

  while(current != NULL){
    next = current -> next;
    current -> next = prev;
    prev = current;
    current = next;
  }

  head = prev;
}