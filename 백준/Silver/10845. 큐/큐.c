#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _Node {
  int elem;
  struct _Node* prev;
  struct _Node* next;
} Node;

Node* getNode(){
  Node* p = (Node*)malloc(sizeof(Node));
  p->elem = 0;
  p->prev = NULL;
  p->next = NULL;
  return p;
}

Node* front = NULL;
Node* rear = NULL;
int size = 0;

void push(int elem){
  Node* p = getNode();
  p->elem = elem;
  p->prev = rear;

  if(rear == NULL){
    front = p;
    rear = p;
  } else {
    rear->next = p;
    rear = p;
  }
  size++;
}

int pop(){
  if(size==0)
    return -1;
  
  Node* q = front;
  int e = q->elem;

  if(q->next == NULL){
    free(q);
    front = NULL;
    rear = NULL;
  } else {
    (front->next)->prev = NULL;
    front = front->next;
  }

  size--;
  return e;
}

int empty(){
  return (front==NULL) ? 1 : 0;
}

int getFront(){
  if(empty())
    printf("-1\n");
  else
    printf("%d\n", front->elem);
}

int getRear(){
  if(empty()==1)
    printf("-1\n");
  else
    printf("%d\n", rear->elem);
}

int main(){
  int n;
  scanf("%d", &n); getchar();

  for(int i=0; i<n; i++){
    char a[6];
    scanf("%s", &a); getchar();

    if(!strcmp(a, "push")){
      int b;
      scanf("%d", &b); getchar();
      push(b);
    }
    else if(!strcmp(a, "pop")){
      int e = pop();
      printf("%d\n", e);
    }
    else if(!strcmp(a, "size")){
      printf("%d\n", size);
    }
    else if(!strcmp(a, "empty")){
      printf("%d\n", empty());  
    }
    else if(!strcmp(a, "front")){
      getFront();
    }
    else if(!strcmp(a, "back")){
      getRear();
    }
  }
  
  return 0;
}