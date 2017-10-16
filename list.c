#include <stdio.h>
#include <stdlib.h>

struct node {int i; struct node * next;};


void print_list(struct node * n) {
  
  while (n) {
    printf("%d-> ",n->i);
    n=n->next;

  }
  printf("NULL\n");
}

struct node * insert_front(struct node * front, int j) {
  
  struct node * front2;
  front2=(struct node *)malloc(sizeof(struct node));
  front2->i= j;
  front2->next=front;
  return front2;

}

struct node * free_list(struct node * n) {
  while (n) {
    struct node * temp;
    n=n->next;
    free(temp);
  }
  return n;

}

int main() {
  struct node * list=0;
  printf("empty list:\n");
  print_list(list);
  printf("\none element:\n");
  list=insert_front(list, 2);
  print_list(list);
  list=insert_front(list,5);
  printf("\ntwo elements:\n");
  print_list(list);
  list=free_list(list);
  printf("\nList Freedom\n");
  print_list(list);
}
