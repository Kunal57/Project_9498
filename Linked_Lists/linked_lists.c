// Implement a Linked List in C

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int number;
  struct node *next;
} node;

void insert(int number);
void print();

node *head = NULL;

int main(void){

  int i, x, k;

  printf("Amount of Numbers: \n");
  scanf("%i", &i);

  for(x = 0; x < i; x++){
    printf("Number: ");
    scanf("%i", &k);
    insert(k);
    print();
  }

  return 0;
}

void insert(int number){
  node *temp;
  temp = malloc(sizeof(node));

  temp -> number = number;
  temp -> next = head;

  head = temp;
}

void print(){
  node *temp;
  temp = head;

  while(temp -> next != NULL){
    printf("%i ", temp -> number);
    temp = temp -> next;
  }

  printf("%i\n", temp -> number);
}
